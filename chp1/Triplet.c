#include "Triplet.h"

<<<<<<< HEAD
//构造三元组T并赋值
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3)
{
	(*T) = (ElemType *)malloc(3 * sizeof(ElemType));
	if ((*T) == NULL)//NULL已有定义
	{
		printf("申请内存失败！\n");
=======
//������Ԫ��T����ֵ
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3)
{
	(*T) = (ElemType *)malloc(3 * sizeof(ElemType));
	if ((*T) == NULL)//NULL���ж���
	{
		printf("�����ڴ�ʧ�ܣ�\n");
>>>>>>> from git for windows
		exit(OVERFLOW);
	}
	else
	{
		*(*T + 0) = v1;
		*(*T + 1) = v2;
		*(*T + 2) = v3;
		return OK;
	}
}

<<<<<<< HEAD
//销毁三元组
=======
//������Ԫ��
>>>>>>> from git for windows
Status DestroyTriplet(Triplet *T)
{
	free(*T);
	*T = NULL;
<<<<<<< HEAD
	printf("分配内存已释放！");
		return OK;
}

//返回第i元的值
=======
	printf("�����ڴ����ͷţ�");
		return OK;
}

//���ص�iԪ��ֵ
>>>>>>> from git for windows
Status Get(Triplet *T, int i, ElemType *e)
{
	if (i < 1 || i>3) return ERROR;
	else 
		*e = T[i - 1]; return OK;
}

<<<<<<< HEAD
//给第i元赋值
=======
//����iԪ��ֵ
>>>>>>> from git for windows
Status Put(Triplet *T, int i, ElemType e)
{
	if (i < 1 || i>3) return ERROR;
	else *(*T + i - 1) = e; return OK;
}

<<<<<<< HEAD
//判断升序
=======
//�ж�����
>>>>>>> from git for windows
Status IsAscending(Triplet T)
{
	return  (T[0] <= T[1] && T[1 <= T[2]]);
}

<<<<<<< HEAD
//判断降序
=======
//�жϽ���
>>>>>>> from git for windows
Status IsDecending(Triplet T)
{
    return (T[0] >= T[1] && T[1 >= T[2]]);
}

<<<<<<< HEAD
//返回最大值
=======
//�������ֵ
>>>>>>> from git for windows
Status Max(Triplet T)
{
	ElemType e;
	if (T[0] > T[1])
		e = T[0];
	else
		e = T[1];
	if (T[2] > e)
		e = T[2];
	return e;
}

<<<<<<< HEAD
//返回最小值
=======
//������Сֵ
>>>>>>> from git for windows
Status Min(Triplet T)
{
	ElemType e;
	if (T[0] < T[1])
		e = T[0];
	else
		e = T[1];
	if (T[2] < e)
		e = T[2];
	return e;
}
