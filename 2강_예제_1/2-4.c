#include <stdio.h>

void char_type2()
{
	char ch;
	int in;

	ch = in = 'A';					// �����δ� 'A'�� ASCII �ڵ尪�� 65 ����
	printf("ch = %d \n", ch);		// ch�� ����� ���� 65�� ���
	printf("in = %d \n", in);
	printf("-------------- \n");

	ch = in = 100;
	printf("ch = %c \n", ch);		// ch�� ����� ���� 100�� ASCII ���ڷ� ���
	printf("in = %c \n", in);
}