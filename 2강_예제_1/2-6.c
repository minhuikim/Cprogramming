#include <stdio.h>

void enum_type()
{
	enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
	enum day2 { sun = 2, mon, tue, wed, thu, fri, sat } d2;

	d1 = WED;
	d2 = wed;

	printf("������ d1 ����� ���� %d �Դϴ�. \n", d1);
	printf("������ d2 ����� ���� %d �Դϴ�. \n", d2);
}