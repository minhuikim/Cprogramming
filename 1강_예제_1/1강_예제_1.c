#include <stdio.h>
#pragma warning(disable:4996)

// ���� 2
int a, b, c;
int product(int x, int y);

void main() {
	/*
		���� 1. Hello ����ϱ�
	*/
	printf("Hello~ \n");

	/*
		���� 2. �Է� -> ���� ��� ���
	*/
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);

	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);

	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c);
}

int product(int x, int y)
{
	return (x * y);
}

/*
���� 1 ���
	Hello~

���� 2 �Է�
	Enter a number between 1 and 100 : 3
	Enter another number between 1 and 100 : 100
���� 2 ���
	3 * 100 = 300
*/