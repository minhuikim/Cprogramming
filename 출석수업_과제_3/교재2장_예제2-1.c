#include <stdio.h>

void main()
{
	/*
		printf�� %d��� :	�������� ���
		\n :				���๮��, �ٹٲ�
		sizeof() �Լ� :		�ڷ����� ũ�⸦ ����Ʈ ������ ���ϴ� �Լ�
	*/
	// char �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char));
	// signed char �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char));
	// unsigned char �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned char �ڷ��� ũ�� : %d byte\n", sizeof(unsigned char));
	// short �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short));
	// short int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int));
	// signed short �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short));
	// signed short int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int));
	// unsigned short �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short));
	// unsigned short int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int));
	// int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int));
	// signed int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int));
	// unsigned �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned));
	// unsigned int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int));
	// long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long));
	// signed long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long));
	// signed long int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int));
	// unsigned long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long));
	// unsigned long int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int));
	// long long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long));
	// long long int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int));
	// signed long long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long));
	// signed long long int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int));
	// unsigned long long �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long));
	// unsigned long long int �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int));
	// float �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float));
	// double �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double));
	// long double �ڷ����� ũ�⸦ sizeof�Լ��� ����� ����
	printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double));
}