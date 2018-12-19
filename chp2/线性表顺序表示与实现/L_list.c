#include "L_list.h"

Status InitList(SqList *L)//构造一个空线性表
{
	L->elem = (Elemtype *)malloc(LIST_INIT_SIZE * sizeof(Elemtype));
	if (!L->elem) exit(OVERFLOW);//分配失败
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	return OK;
}
Status DestroyList(SqList *L)
{
	free(L->elem);
	L->elem = NULL;
	L->length = 0;
	L->listsize = 0;
	printf("表已销毁！");
	return OK;
}

Status ListEmpty(SqList L)
{
	return L.length == 0 ? TRUE : FALSE;
}
Status ClearList(SqList *L)
{
	L->length = 0;
	return OK;
}

Status ListLength(SqList L)
{
	return L.length;
}

Status GetElem(SqList L, int i, Elemtype *e)
{
	if (i <= 0 || i > L.length)
	{
		return ERROR;
		printf("位置非法！");
	}
	else
		*e = L.elem[i - 1];
	return OK;
}

Status LocateElem(SqList L, Elemtype e, Status(compare)(Elemtype, Elemtype))
{
	int i = 1;
	while (i <= L.length && !compare(e, L.elem[i - 1]))
		++i;
	if (i <= L.length)
		return i;
	else
		return 0;
}

Status PriorElem(SqList L, Elemtype cur_e, Elemtype *pre_e)
{
	int i = 1;
	if (L.elem[0] != cur_e)
	{
		while (i < L.length&&L.elem[i] != cur_e)
			++i;
		if (i < L.length)
		{
			*pre_e = L.elem[i - 1];
			return OK;
		}
	}
	return ERROR;
}

Status NextElem(SqList L, Elemtype cur_e, Elemtype *next_e)
{
	int i = 1;
	if (cur_e != L.elem[L.length - 1])
	{
		while (i < L.length&&L.elem[i] != cur_e)
			++i;
		if (i < L.length)
		{
			*next_e = L.elem[i + 1];
			return OK;
		}
	}
	return ERROR;
}

Status ListInsert(SqList *L, int i, Elemtype e)
{
	Elemtype *newbase;
	Elemtype *p, *q;
	if (i<1 || i>L->length + 1) return ERROR;
	if (L->length >= L->listsize) {
		newbase = (Elemtype*)realloc(L->elem, (L->listsize + LISTINCREMENT) * sizeof(Elemtype));
		if (!newbase) exit(OVERFLOW);
		L->elem = newbase;
		L->listsize += LISTINCREMENT;
	}
	q = &(L->elem[i - 1]);
	for (p = &L->elem[L->length - 1]; p >= q; --p)
		*(p + 1) = *p;
	*q = e;
	L->length++;
	return OK;
}

Status ListDelete(SqList *L, int i, Elemtype *e)
{
	int j;
	Elemtype *q, *p;
	if (i<1 || i>L->length) return ERROR;
	p = &L->elem[i - 1];
	*e = *p;
	q = L->elem + L->length - 1;
	for (++p; p <= q; ++p)
		*(p - 1) = *p;
	L->length--;
	return OK;
}

Status ListTraverse(SqList L, void(visit)(Elemtype))
{
	int i;
	for (i = 0; i < L.length; i++)
		visit(L.elem[i]);
	return OK;
}
