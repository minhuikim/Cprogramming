#include <stdio.h>

void example3_14()
{
	int a = 10, b;
	b = (a > 15) ? (a + 1) : (a - 1);	// ������ �������� �����Ƿ� a - 1�� ����
	printf("b = %d", b);
}