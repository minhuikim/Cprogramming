#include <stdio.h>

void char_type()
{
	char ch1;
	char ch2;
	ch1 = 0;	// ������ 7 ����
	ch2 = '0';	// �����δ� '7'�� ASCII �ڵ尪�� 65 ����

	printf("ch1�� ASCII �ڵ尪 = %d, ASCII ���� = %c \n", ch1, ch1);
	// ch1�� ����� ���� 0�� ���, ASCII �ڵ尪 0�� null ����
	printf("ch2�� ASCII �ڵ尪 = %d, ASCII ���� = %c \n", ch2, ch2);
	// ch2�� ����� ASCII ���� '0' �ڵ尪 48 ���
}