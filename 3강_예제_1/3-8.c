#include <stdio.h>

void example3_8()
{
	char s1[] = "Computer";
	char s2[] = "Science";

	// '\n'�� ������� �����Ƶ� �ڵ����� ���� �ٲ�� ��µ�
	puts(s1);
	puts(s2);

	// '\n'�� ������� �ʾƼ� ���ڿ��� ����Ǿ� ��µ�
	printf("%s", s1);
	printf("%s", s2);
}