#include <stdio.h>
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޽��� ����

void example3_7()
{
	char s[50];									// ���ڿ� ������ ���� �迭���� s�� �迭 ����
	
	printf("���ڿ� �Է�? ");
	gets(s);									// get()�� �̿��Ͽ� ���ڿ��� �޾Ƶ���
	printf("gets()�� ���ڿ� �Է� = %s \n", s);

	printf("���ڿ� �Է�? ");
	scanf("%s", s);								// scanf()�� �̿��Ͽ� ���ڿ��� �޾Ƶ���
	printf("scanf()�� ���ڿ� �Է� = %s \n", s);
}