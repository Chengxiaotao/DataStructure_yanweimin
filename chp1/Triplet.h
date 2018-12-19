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
typedef int ElemType;//ä¸‰å…ƒç»„ç±»åž‹å¯éšæ—¶è½¬å˜
typedef ElemType * Triplet;

//æž„é€ ä¸‰å…ƒç»„Tå¹¶èµ‹å€¼
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3);

//é”€æ¯ä¸‰å…ƒç»„
Status DestroyTriplet(Triplet *T);

//è¿”å›žç¬¬iå…ƒçš„å€¼
Status Get(Triplet *T, int i, ElemType *e);

//ç»™ç¬¬iå…ƒèµ‹å€¼
Status Put(Triplet *T, int i, ElemType e);

//åˆ¤æ–­å‡åº
Status IsAscending(Triplet T);

//åˆ¤æ–­é™åº
Status IsDecending(Triplet T);

//è¿”å›žæœ€å¤§å€¼
Status Max(Triplet T);

//è¿”å›žæœ€å°å€¼
Status Min(Triplet T);

#endif
=======
typedef int ElemType;//ÈýÔª×éÀàÐÍ¿ÉËæÊ±×ª±ä
typedef ElemType * Triplet;

//¹¹ÔìÈýÔª×éT²¢¸³Öµ
Status Initriplet(Triplet *T, ElemType v1, ElemType v2, ElemType v3);

//Ïú»ÙÈýÔª×é
Status DestroyTriplet(Triplet *T);

//·µ»ØµÚiÔªµÄÖµ
Status Get(Triplet *T, int i, ElemType *e);

//¸øµÚiÔª¸³Öµ
Status Put(Triplet *T, int i, ElemType e);

//ÅÐ¶ÏÉýÐò
Status IsAscending(Triplet T);

//ÅÐ¶Ï½µÐò
Status IsDecending(Triplet T);

//·µ»Ø×î´óÖµ
Status Max(Triplet T);

//·µ»Ø×îÐ¡Öµ
Status Min(Triplet T);


#endif
>>>>>>> from git for windows
