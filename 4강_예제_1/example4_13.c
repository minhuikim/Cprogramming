#include "header.h"

void example4_13()
{
	int i, sum = 0;				// ���� ���� i�� �������̾�� ��
	
	for (i = 1; i <= 10; ++i)	// i���� 11�� �Ǹ� ���ǽ��� ������ �Ǿ� ������ ��������
	{
		sum = sum + i;
		printf("%d ��° ���� : sum = %d \n", i, sum);
	}
	printf("1���� %d������ �� = %d \n", i-1, sum);
}