#ifndef __LLIST_H__
#define __LLIST_H__

#include "E:\c_pjs\Project1\Project1\Status.h"
#include <stdio.h>
#include <stdlib.h>

#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
typedef int Status;
typedef int Elemtype;
typedef struct {
	Elemtype * elem;
	int length;
	int listsize;
}SqList;
Status InitList(SqList *L);//����һ�������Ա�

Status DestroyList(SqList *L);//�������Ա�

Status ClearList(SqList *L);//������Ա�

Status ListEmpty(SqList L);//�жϱ��Ƿ�Ϊ�գ����򷵻�1����֮0

Status ListLength(SqList L);//�������Ա���

Status GetElem(SqList L, int i, Elemtype *e);//���ص�i��Ԫ��

Status LocateElem(SqList L, Elemtype e,Status(compare)(Elemtype,Elemtype));//���ر��е�һ����e��ȵ�Ԫ��λ��

Status PriorElem(SqList L, Elemtype cur_e, Elemtype *pre_e);//����ǰ��

Status NextElem(SqList L, Elemtype cur_e, Elemtype *next_e);//���غ��

Status ListInsert(SqList *L, int i, Elemtype e);//����

Status ListDelete(SqList *L, int i, Elemtype *e);//ɾ��Ԫ��

Status ListTraverse(SqList L, void(visit)(Elemtype));//����Ԫ��ʹ�ú���
#endif
