#include <stdio.h>

void example3_10()
{
	int a, b, c;
	a = b = c = 0;

	a = ++b + ++c;		// b�� c�� ���� 1 �����ϰ� �� ���� ���� ���� a�� ����
	printf("a = ++b + ++c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
	
	a = b++ + c++;		// c�� ���� 1 ������ �� b�� ���ؼ� a�� �����ϰ� b�� ���� 1 ����
	printf("a = b++ + c++ ���� �� a = %d, b = %d, c = %d \n", a, b, c);

	a = b-- + --c;		// c�� ���� 1 ������ �� b�� ���ؼ� a�� �����ϰ� b�� ���� 1 ����
	printf("a = b-- + --c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
}