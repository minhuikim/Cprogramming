#include <stdio.h>
#pragma warning(disable:4996)

void example3_2()
{
	int in_money, coin_500, coin_100, coin_50, coin_10;
	printf("�������� ��ȯ�� �ݾ��� ? ");
	scanf("%d", &in_money);

	coin_500 = in_money / 500;
	in_money = in_money % 500;

	coin_100 = in_money / 100;
	in_money = in_money % 100;


	coin_50 = in_money / 50;
	in_money = in_money % 50;

	coin_10 = in_money / 10;
	in_money = in_money % 10;

	printf("\n ���� ��¥�� => %d �� \n", coin_500);
	printf(" �� ��¥�� => %d �� \n", coin_100);
	printf(" ���� ��¥�� => %d �� \n", coin_50);
	printf(" �� ��¥�� => %d �� \n", coin_10);
	printf(" �ٲ��� ���� �ܵ� => %d �� \n", in_money);

}