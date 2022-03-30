#include <stdio.h>

void example3_8()
{
	char s1[] = "Computer";
	char s2[] = "Science";

	// '\n'을 사용하지 ㅇ낳아도 자동으로 줄이 바뀌어 출력됨
	puts(s1);
	puts(s2);

	// '\n'을 사용하지 않아서 문자열이 연결되어 출력됨
	printf("%s", s1);
	printf("%s", s2);
}