#include <stdio.h>

void example3_11()
{
	int a = 4, b, c, d;
	b = a > 2;				// a�� 2���� ū���� ��, ����� ���̹Ƿ� b�� 1 ����
	printf("b = %d \n", b);

	c = a < 2;				// a�� 2���� �������� ��, ����� �����̹Ƿ� c�� 0 ����
	printf("c = %d \n", c);

	d = a == 4;				// a�� 4�ΰ��� ��, ����� ���̹Ƿ� d�� 1 ����
	printf("d = %d \n", d);
}