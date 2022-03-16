#include <stdio.h>

void char_type()
{
	char ch1;
	char ch2;
	ch1 = 0;	// 십진수 7 저장
	ch2 = '0';	// 실제로는 '7'의 ASCII 코드값인 65 저장

	printf("ch1의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch1, ch1);
	// ch1에 저장된 정수 0을 출력, ASCII 코드값 0은 null 문자
	printf("ch2의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch2, ch2);
	// ch2에 저장된 ASCII 문자 '0' 코드값 48 출력
}