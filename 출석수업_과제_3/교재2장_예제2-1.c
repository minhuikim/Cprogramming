#include <stdio.h>

void main()
{
	/*
		printf에 %d사용 :	정수형을 출력
		\n :				개행문자, 줄바꿈
		sizeof() 함수 :		자료형의 크기를 바이트 단위로 구하는 함수
	*/
	// char 자료형의 크기를 sizeof함수를 사용해 구함
	printf("char 자료형 크기 : %d byte\n", sizeof(char));
	// signed char 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));
	// unsigned char 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned char 자료형 크기 : %d byte\n", sizeof(unsigned char));
	// short 자료형의 크기를 sizeof함수를 사용해 구함
	printf("short 자료형 크기 : %d byte\n", sizeof(short));
	// short int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("short int 자료형 크기 : %d byte\n", sizeof(short int));
	// signed short 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
	// signed short int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
	// unsigned short 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
	// unsigned short int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
	// int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("int 자료형 크기 : %d byte\n", sizeof(int));
	// signed int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
	// unsigned 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
	// unsigned int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
	// long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("long 자료형 크기 : %d byte\n", sizeof(long));
	// signed long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
	// signed long int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
	// unsigned long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));
	// unsigned long int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
	// long long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
	// long long int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));
	// signed long long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));
	// signed long long int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));
	// unsigned long long 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));
	// unsigned long long int 자료형의 크기를 sizeof함수를 사용해 구함
	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));
	// float 자료형의 크기를 sizeof함수를 사용해 구함
	printf("float 자료형 크기 : %d byte\n", sizeof(float));
	// double 자료형의 크기를 sizeof함수를 사용해 구함
	printf("double 자료형 크기 : %d byte\n", sizeof(double));
	// long double 자료형의 크기를 sizeof함수를 사용해 구함
	printf("long double 자료형 크기 : %d byte\n", sizeof(long double));
}