#include <stdio.h>
#pragma warning(disable:4996)

// 예제 2
int a, b, c;
int product(int x, int y);

void main() {
	/*
		예제 1. Hello 출력하기
	*/
	printf("Hello~ \n");

	/*
		예제 2. 입력 -> 곱의 결과 출력
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
예제 1 출력
	Hello~

예제 2 입력
	Enter a number between 1 and 100 : 3
	Enter another number between 1 and 100 : 100
예제 2 출력
	3 * 100 = 300
*/