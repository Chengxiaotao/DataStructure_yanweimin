#ifndef __TRIPLET_H__
#define __TRIPLET_H__

<<<<<<< HEAD
=======

>>>>>>> from git for windows
#include "Status.h"
#include <stdio.h>
#include <stdlib.h>
typedef int Status;
<<<<<<< HEAD
typedef int ElemType;//三元组类型可随时转变
typedef ElemType * Triplet;

//构造三元组T并赋值
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3);

//销毁三元组
Status DestroyTriplet(Triplet *T);

//返回第i元的值
Status Get(Triplet *T, int i, ElemType *e);

//给第i元赋值
Status Put(Triplet *T, int i, ElemType e);

//判断升序
Status IsAscending(Triplet T);

//判断降序
Status IsDecending(Triplet T);

//返回最大值
Status Max(Triplet T);

//返回最小值
Status Min(Triplet T);

#endif
=======
typedef int ElemType;//��Ԫ�����Ϳ���ʱת��
typedef ElemType * Triplet;

//������Ԫ��T����ֵ
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3);

//������Ԫ��
Status DestroyTriplet(Triplet *T);

//���ص�iԪ��ֵ
Status Get(Triplet *T, int i, ElemType *e);

//����iԪ��ֵ
Status Put(Triplet *T, int i, ElemType e);

//�ж�����
Status IsAscending(Triplet T);

//�жϽ���
Status IsDecending(Triplet T);

//�������ֵ
Status Max(Triplet T);

//������Сֵ
Status Min(Triplet T);


#endif
>>>>>>> from git for windows
