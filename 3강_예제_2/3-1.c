#include <stdio.h>

void example3_1()
{
	int i = 873;
	float f = 123.4567;
	char s[] = "Happy birthday";

	printf("������ �ڷ��� ��� \n");
	printf("\t %%04d %04d \n \t %%09d %09d \n\n", i, i);

	printf("�Ǽ��� �ڷ��� ��� \n");
	printf("\t %%.3f %.3f \n \t %%.3e %.3e \n\n", f, f);

	printf("���ڿ� �ڷ��� ��� \n");
	printf("\t %.11s \n", s);

}