#include <stdio.h>
#include "Triplet.h"

int main()
{
	Status flag;
	ElemType v1, v2, v3;
	Triplet T;
<<<<<<< HEAD
	printf("è¯·è¾“å…¥ä¸‰å…ƒç»„çš„ä¸‰ä¸ªå€¼ï¼š\n");
	scanf_s("%d%d%d", &v1,&v2,&v3);
	flag = Initriplet(&T, v1, v2, v3);
	printf("è°ƒç”¨åˆå§‹åŒ–å‡½æ•°åŽï¼Œflag=%d,Tçš„ä¸‰ä¸ªå€¼ä¸ºï¼š%d,%d,%d\n", flag, T[0], T[1], T[2]);
	//printf("Tçš„ä¸‰ä¸ªå€¼ä¸ºï¼š%d,%d,%d\n", T[0], T[1], T[2]);
	if (IsAscending(T))
		printf("å…ƒç´ ä¸ºå‡åº\n");
	if (IsDecending(T))
		printf("å…ƒç´ ä¸ºé™åº\n");
	printf("è¯¥ä¸‰å…ƒç»„ä¸­çš„æœ€å¤§å€¼ä¸ºï¼š%d,æœ€å°å€¼ä¸ºï¼š%d\n", Max(T), Min(T));
	DestroyTriplet(&T);
	return 0;
}
=======
	printf("ÇëÊäÈëÈýÔª×éµÄÈý¸öÖµ£º\n");
	scanf_s("%d%d%d", &v1,&v2,&v3);
	flag = Initriplet(&T, v1, v2, v3);
	printf("µ÷ÓÃ³õÊ¼»¯º¯Êýºó£¬flag=%d,TµÄÈý¸öÖµÎª£º%d,%d,%d\n", flag, T[0], T[1], T[2]);
	//printf("TµÄÈý¸öÖµÎª£º%d,%d,%d\n", T[0], T[1], T[2]);
	if (IsAscending(T))
		printf("ÔªËØÎªÉýÐò\n");
	if (IsDecending(T))
		printf("ÔªËØÎª½µÐò\n");
	printf("¸ÃÈýÔª×éÖÐµÄ×î´óÖµÎª£º%d,×îÐ¡ÖµÎª£º%d\n", Max(T), Min(T));
	DestroyTriplet(&T);
	return 0;
}

>>>>>>> from git for windows
