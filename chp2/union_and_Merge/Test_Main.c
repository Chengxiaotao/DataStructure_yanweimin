#include "Additional.h"
void PrintElem(Elemtype e) {
	printf("%d ", e);
}
int main()
{
	/*A,B,C初始化及赋值*/
	SqList A, B, C;
	InitList(&A);
	InitList(&B);
	InitList(&C);
	for (int i = 1; i <= 6; i++) ListInsert(&A, i, i);
	for (int i = 1; i <= 6; i++) ListInsert(&B, i, 2 * i);
	printf("初始化后，A=");
	ListTraverse(A, PrintElem);
	printf("\n");
	printf("初始化后，B=");
	ListTraverse(B, PrintElem);
	printf("\n");

	/*函数MergeList测试*/
	MergeList(A, B, &C);
	printf("合并后，C=");
	ListTraverse(C, PrintElem);
	printf("\n");
	/*函数unionL测试*/
	unionL(&A, &B);
	printf("合并后，A=");
	ListTraverse(A, PrintElem);

	system("pause");
	return 0;
}
