#include <stdio.h>

#include "L_list.h"
Status CmpGreater(Elemtype e, Elemtype data) {
	return data > e ? TRUE : FALSE;
}
void PrintElem(Elemtype e) {
	printf("%d ", e);
}

int main()
{
	SqList L;
	int i;
	Elemtype e;

	printf("▲函数 InitList 测试...▲\n");
	{
		printf("初始化顺序表L...");
		InitList(&L);
		printf("\n\n");
	}
	
	printf("▲函数ListInsert测试...▲\n");
	{
		for (i = 0; i <= 6; i++)
		{
			printf("在第%d个位置插入\"%d\"...\n", i, 2 * i);
			ListInsert(&L, i, 2 * i);
		}
		printf("\n\n");
	}

	printf("▲函数ListTraverse测试...▲\n");
	{
		printf("L中的元素为：L=");
		ListTraverse(L, PrintElem);
		printf("\n\n");
	}
	printf("▲函数Listlength测试...▲\n");
	{
		i = ListLength(L);
		printf("L的长度为%d ", i);
		printf("\n\n");
	}
	printf("▲函数ListDelete测试...▲\n");
	{
		ListDelete(&L, 6, &e);
		printf("删除L中的第6个元素\"%d\"", e);
		printf("删除后表中的元素为L=");
		ListTraverse(L, PrintElem);
		printf("\n\n");
	}
	printf("▲函数GetElem测试...▲\n");
	{
		GetElem(L, 4, &e);
		printf("L中第四个位置的元素为\"%d\"", e);
		printf("\n\n");
	}
	printf("▲函数LocateElem测试...▲\n");
	{
		i = LocateElem(L, 7, CmpGreater);
		printf("L中第一个值等于\"7\"的元素的位置为%d\n", i);
		printf("\n\n");
	}
	printf("▲函数PriorElem测试...▲\n");
	{
		PriorElem(L, 6, &e);
		printf("元素\"6\"的前驱为\"%d\"", e);
		printf("\n\n");
	}
	printf("▲函数NextElem测试...▲\n");
	{
		NextElem(L, 6, &e);
		printf("元素\"6\"的后继为\"%d\"", e);
		printf("\n\n");
	}
	printf("▲函数ClearList测试...▲\n");
	{
		printf("清空前：");
		ListEmpty(L) ? printf("L为空！") : printf("L不为空！");
		ClearList(&L);
		printf("清空后：");
		ListEmpty(L) ? printf("L为空！") : printf("L不为空！");
		printf("\n\n");
	}
	printf("▲函数DestroyList测试...▲\n");
	{
		printf("销毁前：");
		L.elem ? printf("L存在！") : printf("L不存在！");
		DestroyList(&L);
		printf("销毁后：");
		L.elem ? printf("L存在！") : printf("L不存在！");
		printf("\n\n");
	}
	system("pause");
	return 0;
}