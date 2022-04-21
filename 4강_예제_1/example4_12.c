#include "header.h"

void example4_12()
{
	int i, n, c = 'A';

	while (1)						// 조건에 따른 while 반복문
	{
		printf("횟수는 ? ");
		scanf("%d", &n);

		for (i = 1; i <= n; i++)	// n회 반복하는 for 반복문
		{
			printf("%c", c);
			if (c == 'Q')			// c가 Q가 되면
				goto end;			// 레이블명 end로 무조건 실행을 옮김
			c++;					// c에 1씩 더함
		}
		printf("\n\n");
	}
	end:							// 레이블명(레이블명 다음에는 콜론을 붙임)
	printf("\n\n끝");
}