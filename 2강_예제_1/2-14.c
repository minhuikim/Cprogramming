#include <stdio.h>
#define CONDITION 1

void compiled_condition()
{
#if CONDITION
	printf("A ���α׷��� ������ \n");
#else
	printf("B ���α׷��� ������ \n");
#endif
}