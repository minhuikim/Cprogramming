#include "header.h"

void example4_11()
{
	int i;
	printf("정수 입력(1~10) : ");
	scanf("%d", &i);

	if (i == 1)
		goto ONE;								// 레이블명 ONE으로 무조건 실행을 옮김
	else if (i == 2)
		goto TWO;								// 레이블명 TWO으로 무조건 실행을 옮김
	else
		goto EXIT;								// 레이블명 EXIT으로 무조건 실행을 옮김

	ONE:										// ONE 레이블명
		printf("입력한 숫자는 1입니다. \n");
		goto EXIT;								// 레이블명 EXIT으로 무조건 실행을 옮김
	TWO:										// TWO 레이블명
		printf("입력한 숫자는 2입니다. \n");
		goto EXIT;
	EXIT:										// EXIT 레이블명
		printf("프로그램을 종료합니다. \n");
}