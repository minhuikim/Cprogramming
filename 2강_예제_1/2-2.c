#include <stdio.h>
#include <limits.h>

void int_type()
{
	char ch1 = CHAR_MIN;		// char �ּڰ�
	char ch2 = CHAR_MAX;		// char �ִ�
	short sh1 = SHRT_MIN;		// short �ּڰ�
	short sh2 = SHRT_MAX;		// short �ִ�
	int in1 = INT_MIN;			// int �ּڰ�
	int in2 = INT_MAX;			// int �ִ�
	long lo1 = LONG_MIN;		// long �ּڰ�
	long lo2 = LONG_MAX;		// long �ִ�
	long long ll1 = LLONG_MIN;	// long long �ּڰ�
	long long ll2 = LLONG_MAX;	// long long �ִ�

	printf("char �ڷ��� ���� : %d ~ %d \n", ch1, ch2);
	printf("short �ڷ��� ���� : %d ~ %d \n", sh1, sh2);
	printf("int �ڷ��� ���� : %d ~ %d \n", in1, in2);
	printf("long �ڷ��� ���� : %ld ~ %ld \n", lo1, lo2);
	printf("long long �ڷ��� ���� : %lld ~ %lld \n", ll1, ll2);
}