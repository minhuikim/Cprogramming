#include <stdio.h>

void octalHexa() 
{
	int num1 = 104;		// ������ ���� num1�� 10���� 104 ����
	int num2 = 0150;	// ������ ���� num2�� 8���� 105 ����
	int num3 = 0x68;	// ������ ���� num3�� 16���� 68 ����

	/* num1, num2, num3�� ����� ������ 10������ ��� */
	printf("num1�� ����� �������� : %d \n", num1);
	printf("num2�� ����� �������� : %d \n", num2);
	printf("num3�� ����� �������� : %d \n", num3);
}