#include "header.h"

void example4_11()
{
	int i;
	printf("���� �Է�(1~10) : ");
	scanf("%d", &i);

	if (i == 1)
		goto ONE;								// ���̺�� ONE���� ������ ������ �ű�
	else if (i == 2)
		goto TWO;								// ���̺�� TWO���� ������ ������ �ű�
	else
		goto EXIT;								// ���̺�� EXIT���� ������ ������ �ű�

	ONE:										// ONE ���̺��
		printf("�Է��� ���ڴ� 1�Դϴ�. \n");
		goto EXIT;								// ���̺�� EXIT���� ������ ������ �ű�
	TWO:										// TWO ���̺��
		printf("�Է��� ���ڴ� 2�Դϴ�. \n");
		goto EXIT;
	EXIT:										// EXIT ���̺��
		printf("���α׷��� �����մϴ�. \n");
}