// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: ����ǥ�� �����ϴ� ���α׷�
// ��¥: 2025.9.18

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0712(void);

int main(void)
{
	asgmt0712();

	return 0;
}

void asgmt0712(void)
{
	char train[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', };
	int seat = 0;
	int sum = 0;

	while (sum < 10)
	{
		printf("���� �¼�: ");

		for (int j = 0; j < 10; j++)
		{
			printf("%c ", train[j]);
		}

		printf("\n������ �¼���? ");
		scanf("%d", &seat);

		for (int a = sum; a < (seat + sum); a++)
		{
			train[a] = 'X';

			printf("%d ", a + 1);
		}

		printf("�� �¼��� �����߽��ϴ�.\n");

		sum += seat;
	}
}