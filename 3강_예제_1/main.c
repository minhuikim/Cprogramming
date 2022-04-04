#include <stdio.h>
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

int main()
{

	printf("예제 3-2 양식 변환기호의 사용\n");
	example3_2();

	printf("\n예제 3-3 출력 양식의 편집\n");
	example3_3();

	//printf("\n예제 3-4 scanf() 함수의 사용\n");
	//example3_4();

	//printf("\n예제 3-5 getchar() 함수의 사용\n");
	//example3_5();

	printf("\n예제 3-6 putchar() 함수의 사용\n");
	example3_6();

	//printf("\n\n예제 3-7 gets() 함수의 사용\n");
	//example3_7();

	printf("\n예제 3-8 puts() 함수의 사용\n");
	example3_8();

	printf("\n\n예제 3-9 산술 연산자의 사용\n");
	example3_9();

	printf("\n예제 3-10 ++, -- 연산자의 사용\n");
	example3_10();

	printf("\n예제 3-11 관계 연산자의 사용\n");
	example3_11();
	
	printf("\n예제 3-12 논리 연산자의 사용\n");
	example3_12();

	printf("\n예제 3-13 대입 연산자의 사용\n");
	example3_13();

	printf("\n예제 3-14 조건 연산자의 사용\n");
	example3_14();

	printf("\n예제 3-15 sizeof()의 사용\n");
	example3_15();

	printf("\n예제 3-16 자동 형변환\n");
	example3_16();

	printf("\n예제 3-17 강제 형변환\n");
	example3_17();

	printf("\n예제 3-18 강제 형변환의 예\n");
	example3_18();

}



/*
[입, 출력 결과]

예제 3-2 양식 변환기호의 사용
%d : 2147483647
%ld : 2147483647
%lld : 9223372036854775807
%u : 4294967295
%o : 37777777777
%x : ffffffff
%X : FFFFFFFF
%f : 1234.567800
%lf : 1234.567800
%e : 1.234568e+03
%c : a
%s : knou

예제 3-3 출력 양식의 편집
|123|
|  123|
|123  |
|00123|
| 123.5|
|0123.45|

예제 3-4 scanf() 함수의 사용
정수와 long long 정수를 입력 : 1234 1234567890
a = 1234, b = 1234567890
실수를 입력 : 123.456
c =   123.4560, c(지수) = 1.234560e+02
문자를 입력 : A
ch = A
문자열을 입력 : Knou
s[] = Knou

예제 3-5 getchar() 함수의 사용
문자 하나를 입력하세요
f
c = f

예제 3-6 putchar() 함수의 사용
AB
KM

예제 3-7 get() 함수의 사용
문자열 입력? 컴퓨터 과학과
gets()로 문자열 입력 = 컴퓨터 과학과
문자열 입력? 컴퓨터 과학과
scanf()로 문자열 입력 = 컴퓨터

예제 3-8 puts() 함수의 사용
Computer
Science
ComputerScience

예제 3-9 산술 연산자의 사용
x + y = 13
x / y = 3
x % y = 1
y % x = 3

예제 3-10 ++, -- 연산자의 사용
a = ++b + ++c 실행 후 a = 2, b = 1, c = 1
a = b++ + c++ 실행 후 a = 2, b = 2, c = 2
a = b-- + --c 실행 후 a = 3, b = 1, c = 1

예제 3-11 관계 연산자의 사용
b = 1
c = 0
d = 1

예제 3-12 논리 연산자의 사용
c = 1
d = 1
e = 0

예제 3-13 대입 연산자의 사용
a = 20, b = 0, c = 3

예제 3-14 조건 연산자의 사용
b = 9

예제 3-15 sizeof()의 사용
int형의 크기는 = 4바이트
float형 변수 a의 크기는 = 4바이트

예제 3-16 자동 형변환
나눗셈 결과 : 0.000000

예제 3-17 강제 형변환
나눗셈 결과 : 0.750000

예제 3-18 강제 형변환의 예
a + b * c = 610
a = b += 2 * c -> a = 80
a = (b > c) ? b : c -> a = 80
a / b * c = 30
a *= b = c + 5 -> a = 2800
*/