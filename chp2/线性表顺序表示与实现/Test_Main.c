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

	printf("������ InitList ����...��\n");
	{
		printf("��ʼ��˳���L...");
		InitList(&L);
		printf("\n\n");
	}
	
	printf("������ListInsert����...��\n");
	{
		for (i = 0; i <= 6; i++)
		{
			printf("�ڵ�%d��λ�ò���\"%d\"...\n", i, 2 * i);
			ListInsert(&L, i, 2 * i);
		}
		printf("\n\n");
	}

	printf("������ListTraverse����...��\n");
	{
		printf("L�е�Ԫ��Ϊ��L=");
		ListTraverse(L, PrintElem);
		printf("\n\n");
	}
	printf("������Listlength����...��\n");
	{
		i = ListLength(L);
		printf("L�ĳ���Ϊ%d ", i);
		printf("\n\n");
	}
	printf("������ListDelete����...��\n");
	{
		ListDelete(&L, 6, &e);
		printf("ɾ��L�еĵ�6��Ԫ��\"%d\"", e);
		printf("ɾ������е�Ԫ��ΪL=");
		ListTraverse(L, PrintElem);
		printf("\n\n");
	}
	printf("������GetElem����...��\n");
	{
		GetElem(L, 4, &e);
		printf("L�е��ĸ�λ�õ�Ԫ��Ϊ\"%d\"", e);
		printf("\n\n");
	}
	printf("������LocateElem����...��\n");
	{
		i = LocateElem(L, 7, CmpGreater);
		printf("L�е�һ��ֵ����\"7\"��Ԫ�ص�λ��Ϊ%d\n", i);
		printf("\n\n");
	}
	printf("������PriorElem����...��\n");
	{
		PriorElem(L, 6, &e);
		printf("Ԫ��\"6\"��ǰ��Ϊ\"%d\"", e);
		printf("\n\n");
	}
	printf("������NextElem����...��\n");
	{
		NextElem(L, 6, &e);
		printf("Ԫ��\"6\"�ĺ��Ϊ\"%d\"", e);
		printf("\n\n");
	}
	printf("������ClearList����...��\n");
	{
		printf("���ǰ��");
		ListEmpty(L) ? printf("LΪ�գ�") : printf("L��Ϊ�գ�");
		ClearList(&L);
		printf("��պ�");
		ListEmpty(L) ? printf("LΪ�գ�") : printf("L��Ϊ�գ�");
		printf("\n\n");
	}
	printf("������DestroyList����...��\n");
	{
		printf("����ǰ��");
		L.elem ? printf("L���ڣ�") : printf("L�����ڣ�");
		DestroyList(&L);
		printf("���ٺ�");
		L.elem ? printf("L���ڣ�") : printf("L�����ڣ�");
		printf("\n\n");
	}
	system("pause");
	return 0;
}