#include "header.h"

void example4_10()
{
	enum syllable {Do, Re, Mi, Fa} tone;	// enum syllable Ÿ���� tone ����
	// enum : ������ ���� ������ ������� ����
	
	for (tone = Do; tone <= Fa; tone += 1)	// Do, Fa�� ����ó�� ��� ����
	{
		switch (tone)
		{
			case Do: printf("���� �Ͼ� ������ \n");
				break;
			case Re: printf("���� �ձ� ���ڵ� \n");
				break;
			case Mi: printf("�̴� �Ķ� �̳��� \n");
				break;
			case Fa: printf("�Ĵ� ���� �Ķ��� \n");
				break;
		}
	}
}