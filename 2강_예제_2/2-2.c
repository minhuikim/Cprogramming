#include <stdio.h>
#define IN "���� �������� 100�Դϴ�."
#define PI 3.1415926535
#define AREA(X) (PI*(X)*(X))
#define OUT printf("���� ������ ���ϰ� ���α׷��� �����մϴ�.")

void example2_2()
{
	printf("%s \n", IN);
	printf("���� ������ %10.5f �Դϴ�. \n", AREA(100));	// % 10 : ���� �ڸ��� / 5 : �Ҽ� �ڸ��� f
	OUT;
}