#include <stdio.h>

void example3_12()
{
	int a = 4, b = 7, c, d, e;

	c = a > 2 && b <= 7;
	printf("c = %d \n", c);	// ���� ��� ���̹Ƿ� ��(����)

	d = a < 2 || b <= 7;
	printf("d = %d \n", d);	// b�� ��(a�� ����)�̹Ƿ� ��(����)

	e = !a;
	printf("e = %d \n", e);	// a�� ��(0�� �ƴ�)�̹Ƿ� ����(������)
}