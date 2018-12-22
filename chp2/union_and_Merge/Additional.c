#pragma   once
#include <stdio.h>
#include <stdlib.h>
#include "Additional.h"


Status equal(Elemtype e, Elemtype data) {
	return e == data ? TRUE : FALSE;
}
void unionL(SqList *La, SqList *Lb)
{
	Elemtype e;
	int La_len = La->length;
	int Lb_len = Lb->length;
	for (int i = 1; i <= Lb_len; i++){
		GetElem(*Lb,i,&e);
		if (!LocateElem(*La, e, equal)) ListInsert(La, ++La_len, e);
	}
}

void MergeList(SqList La, SqList Lb, SqList *Lc)
{
	InitList(Lc);
	Elemtype ai, bj;
	int i = 1;
	int j = 1;
	int k = 0;
	int La_len = ListLength(La);
	int Lb_len = ListLength(Lb);
	while ((i <= La_len) && (j <= Lb_len)) {
			GetElem(La, i, &ai); 
			GetElem(Lb, j, &bj);
			if (ai <= bj) { ListInsert(Lc, ++k, ai); ++i; }
			else { ListInsert(Lc, ++k, bj); ++j; }
	}
	while (i <= La_len) {
		GetElem(La, i++, &ai); ListInsert(Lc, ++k, ai);
	}
	while (j <= Lb_len) {
		GetElem(Lb, j++, &bj); ListInsert(Lc, ++k, bj);
	}
}
