#include <stdio.h>
#include "Triplet.h"

int main()
{
	Status flag;
	ElemType v1, v2, v3;
	Triplet T;
<<<<<<< HEAD
	printf("请输入三元组的三个值：\n");
	scanf_s("%d%d%d", &v1,&v2,&v3);
	flag = Initriplet(&T, v1, v2, v3);
	printf("调用初始化函数后，flag=%d,T的三个值为：%d,%d,%d\n", flag, T[0], T[1], T[2]);
	//printf("T的三个值为：%d,%d,%d\n", T[0], T[1], T[2]);
	if (IsAscending(T))
		printf("元素为升序\n");
	if (IsDecending(T))
		printf("元素为降序\n");
	printf("该三元组中的最大值为：%d,最小值为：%d\n", Max(T), Min(T));
	DestroyTriplet(&T);
	return 0;
}
=======
	printf("��������Ԫ�������ֵ��\n");
	scanf_s("%d%d%d", &v1,&v2,&v3);
	flag = Initriplet(&T, v1, v2, v3);
	printf("���ó�ʼ��������flag=%d,T������ֵΪ��%d,%d,%d\n", flag, T[0], T[1], T[2]);
	//printf("T������ֵΪ��%d,%d,%d\n", T[0], T[1], T[2]);
	if (IsAscending(T))
		printf("Ԫ��Ϊ����\n");
	if (IsDecending(T))
		printf("Ԫ��Ϊ����\n");
	printf("����Ԫ���е����ֵΪ��%d,��СֵΪ��%d\n", Max(T), Min(T));
	DestroyTriplet(&T);
	return 0;
}

>>>>>>> from git for windows
