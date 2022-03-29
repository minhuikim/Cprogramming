#include <stdio.h>

void example3_6()
{
	char var = 'A';
	putchar(var);		// 함수의 괄호 안에 문자형 변수가 사용됨
	putchar(var + 1);	// 수식이 사용됨
	putchar('\n');		// 
	putchar('K');
	putchar('K' + 2);
	putchar('\007');
	/////?!@
}