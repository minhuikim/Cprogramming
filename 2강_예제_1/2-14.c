#include <stdio.h>
#define CONDITION 1

void compiled_condition()
{
#if CONDITION
	printf("A 프로그램을 컴파일 \n");
#else
	printf("B 프로그램을 컴파일 \n");
#endif
}