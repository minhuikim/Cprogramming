#include <stdio.h>

void variable_scope()
{
	printf("(������ ��� ��) \n");
	short int num1, num2;
	num1 = 32767 + 1;				// short int���� ������ ���
	num2 = -32768 - 1;				// (short int���� ���� : -32768~32767)
	printf("num1 = %d \n", num1);
	printf("num2 = %d \n", num2);

	printf("(�ùٸ� ��) \n");
	int num3, num4;
	num3 = 32767 + 1;
	num4 = -32768 - 1;
	printf("num3 = %d \n", num3);
	printf("num4 = %d \n", num4);
}