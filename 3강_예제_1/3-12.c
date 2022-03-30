#include <stdio.h>

void example3_12()
{
	int a = 4, b = 7, c, d, e;

	c = a > 2 && b <= 7;
	printf("c = %d \n", c);	// 양쪽 모두 참이므로 참(논리곱)

	d = a < 2 || b <= 7;
	printf("d = %d \n", d);	// b가 참(a는 거짓)이므로 참(논리합)

	e = !a;
	printf("e = %d \n", e);	// a가 참(0이 아님)이므로 거짓(논리부정)
}