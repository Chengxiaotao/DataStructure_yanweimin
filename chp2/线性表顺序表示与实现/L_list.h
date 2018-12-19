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
Status InitList(SqList *L);//构造一个空线性表

Status DestroyList(SqList *L);//销毁线性表

Status ClearList(SqList *L);//清空线性表

Status ListEmpty(SqList L);//判断表是否为空，是则返回1，反之0

Status ListLength(SqList L);//返回线性表长度

Status GetElem(SqList L, int i, Elemtype *e);//返回第i个元素

Status LocateElem(SqList L, Elemtype e,Status(compare)(Elemtype,Elemtype));//返回表中第一个与e相等的元素位置

Status PriorElem(SqList L, Elemtype cur_e, Elemtype *pre_e);//返回前驱

Status NextElem(SqList L, Elemtype cur_e, Elemtype *next_e);//返回后继

Status ListInsert(SqList *L, int i, Elemtype e);//插入

Status ListDelete(SqList *L, int i, Elemtype *e);//删除元素

Status ListTraverse(SqList L, void(visit)(Elemtype));//遍历元素使用函数
#endif
