#include "header.h"

void example4_12()
{
	int i, n, c = 'A';

	while (1)						// ���ǿ� ���� while �ݺ���
	{
		printf("Ƚ���� ? ");
		scanf("%d", &n);

		for (i = 1; i <= n; i++)	// nȸ �ݺ��ϴ� for �ݺ���
		{
			printf("%c", c);
			if (c == 'Q')			// c�� Q�� �Ǹ�
				goto end;			// ���̺�� end�� ������ ������ �ű�
			c++;					// c�� 1�� ����
		}
		printf("\n\n");
	}
	end:							// ���̺��(���̺�� �������� �ݷ��� ����)
	printf("\n\n��");
}