#include "Triplet.h"

<<<<<<< HEAD
//æž„é€ ä¸‰å…ƒç»„Tå¹¶èµ‹å€¼
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3)
{
	(*T) = (ElemType *)malloc(3 * sizeof(ElemType));
	if ((*T) == NULL)//NULLå·²æœ‰å®šä¹‰
	{
		printf("ç”³è¯·å†…å­˜å¤±è´¥ï¼\n");
=======
//¹¹ÔìÈýÔª×éT²¢¸³Öµ
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3)
{
	(*T) = (ElemType *)malloc(3 * sizeof(ElemType));
	if ((*T) == NULL)//NULLÒÑÓÐ¶¨Òå
	{
		printf("ÉêÇëÄÚ´æÊ§°Ü£¡\n");
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
//é”€æ¯ä¸‰å…ƒç»„
=======
//Ïú»ÙÈýÔª×é
>>>>>>> from git for windows
Status DestroyTriplet(Triplet *T)
{
	free(*T);
	*T = NULL;
<<<<<<< HEAD
	printf("åˆ†é…å†…å­˜å·²é‡Šæ”¾ï¼");
		return OK;
}

//è¿”å›žç¬¬iå…ƒçš„å€¼
=======
	printf("·ÖÅäÄÚ´æÒÑÊÍ·Å£¡");
		return OK;
}

//·µ»ØµÚiÔªµÄÖµ
>>>>>>> from git for windows
Status Get(Triplet *T, int i, ElemType *e)
{
	if (i < 1 || i>3) return ERROR;
	else 
		*e = T[i - 1]; return OK;
}

<<<<<<< HEAD
//ç»™ç¬¬iå…ƒèµ‹å€¼
=======
//¸øµÚiÔª¸³Öµ
>>>>>>> from git for windows
Status Put(Triplet *T, int i, ElemType e)
{
	if (i < 1 || i>3) return ERROR;
	else *(*T + i - 1) = e; return OK;
}

<<<<<<< HEAD
//åˆ¤æ–­å‡åº
=======
//ÅÐ¶ÏÉýÐò
>>>>>>> from git for windows
Status IsAscending(Triplet T)
{
	return  (T[0] <= T[1] && T[1 <= T[2]]);
}

<<<<<<< HEAD
//åˆ¤æ–­é™åº
=======
//ÅÐ¶Ï½µÐò
>>>>>>> from git for windows
Status IsDecending(Triplet T)
{
    return (T[0] >= T[1] && T[1 >= T[2]]);
}

<<<<<<< HEAD
//è¿”å›žæœ€å¤§å€¼
=======
//·µ»Ø×î´óÖµ
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
//è¿”å›žæœ€å°å€¼
=======
//·µ»Ø×îÐ¡Öµ
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
