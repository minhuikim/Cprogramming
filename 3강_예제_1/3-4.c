#include <stdio.h>
#pragma warning(disable:4996)	// �������� �ʴ� �Լ� ��뿡 ���� ���޼��� ����

void example3_4()
{
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];

	printf("������ long long ������ �Է� : ");
	scanf("%d %lld", &a, &b);		// 2���� ������ �Է¹޾� ���� a, b�� ����
	printf("a = %d, b = %lld \n", a, b);

	printf("�Ǽ��� �Է� : ");
	scanf("%f", &c);				// �Ǽ��� �Է¹޾� ���� c�� ����
	printf("c = %10.4f, c(����) = %e \n", c, c);

	printf("���ڸ� �Է� : ");
	scanf(" %c", &ch);				// ���ڸ� �Է¹޾� ���� ch�� ����
	// ����  scanf()�� �Է��� �� ���� Enter�� �����ϱ� ���� %c �տ� ������ �־�� ��
	printf("ch = %c \n", ch);

	printf("���ڿ��� �Է� : ");
	scanf("%s", s);					// ���ڿ��� �Է¹޾� �迭 s�� ����
	printf("s[] = %s \n", s);
}