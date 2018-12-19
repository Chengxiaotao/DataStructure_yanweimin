#ifndef STATUS_H_
#define STATUS_H_

/*状态码*/
#define TRUE	1
#define FALSE	0
#define OK		1
#define ERROR	0
#define YES		1
#define NO		0
#define success		1
#define unsuccess	0
#define INFEASIBLE	-1

//#ifndef _MATH_H_
#define OVERFLOW	-2//堆栈上溢
#define UNDERFLOW   -3//堆栈下溢
//#endif

//#ifndef NULL
//#define NULL ((void*)0)
//#endif


/*宏函数*/
//函数暂停
/*
#define Wait(x)\
{\
	double _Loop_Num_;\
    for(_Loop_Num_=0.01;_Loop_Num_<=100000.0*x;_Loop_Num_+=0.01)\
;\
}*/

/*
#define PressEnter\
{\
   fflush(stdin);\
printf("Press Enter...");\
getchar();\
fflush(stdin);\
}
*/
/*状态码识别类型*/

#endif
