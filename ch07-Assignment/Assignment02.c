// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 특정 값으로 초기화된 정수형 배열에 대하여 최댓값과 최솟값을 찾아서 출력하는 프로그램
// 날짜: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0703(void);

int main(void)
{
	asgmt0703();

	return 0;
}

void asgmt0703(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	printf("배열: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", arr[i]);
	}

	printf("\n");

	int max_price = arr[0];
	int min_price = arr[0];

	for (int i = 1; i < 10; i++)
	{
		if (arr[i] >= max_price)
		{
			max_price = arr[i];

		}
		else if (arr[i] <= min_price)
		{
			min_price = arr[i];

		}
	}
	printf("최댓값: %d\n", max_price);
	printf("최솟값: %d\n", min_price);



}