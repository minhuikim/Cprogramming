#include <stdio.h>

void example3_13()
{
	int a = 10, b = 3, c = 1;

	a *= (b - 1);	// a = a * (b - 1)�� �ǹ�
	b /= 2 + 3;		// b = b/(2+3)�̰� ������������ �������̹Ƿ� ����� 0�� ��
	c += 2;			// c = c + 2
	printf("a = %d, b = %d, c = %d", a, b, c);
}