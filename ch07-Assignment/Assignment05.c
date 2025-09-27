// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 기차표를 예매하는 프로그램
// 날짜: 2025.9.18

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
		printf("현재 좌석: ");

		for (int j = 0; j < 10; j++)
		{
			printf("%c ", train[j]);
		}

		printf("\n예매할 좌석수? ");
		scanf("%d", &seat);

		for (int a = sum; a < (seat + sum); a++)
		{
			train[a] = 'X';

			printf("%d ", a + 1);
		}

		printf("번 좌석을 예매했습니다.\n");

		sum += seat;
	}
}