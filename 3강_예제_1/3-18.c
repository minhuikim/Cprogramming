#include <stdio.h>

void example3_18()
{
	int a, b, c;
	a = 10; b = 20; c = 30;
	printf("a + b * c = %d \n", a + b * c);					// a + (b * c)의 의미
	printf("a = b += 2 * c -> a = %d \n", a = b += 2 * c);
	// b += 2 * c 가 먼저 계산되고 a = b가 계산됨
	printf("a = (b > c) ? b : c -> a = %d \n", a = (b > c) ? b : c);
	printf("a / b * c = %d \n", a / b * c);
	printf("a *= b = c + 5 -> a = %d \n", a *= b = c + 5);
	// a = (a * (b = (c + 5)))의 의미
}