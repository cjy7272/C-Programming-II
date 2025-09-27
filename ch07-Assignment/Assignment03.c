// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 특정 값으로 초기화된 정수형 배열에서 최댓값을 가진 원소와 최솟값을 가진 원소의 인덱스와 값을 출력하는 프로그램
// 날짜: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0704(void);

int main()
{
	asgmt0704();

	return 0;
}

void asgmt0704(void)
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

	int max_index = 0;
	int min_index = 0;


	for (int i = 1; i < 10; i++)
	{
		if (arr[i] >= max_price)
		{
			max_price = arr[i];
			max_index = i;
		}
		if (arr[i] <= min_price)
		{
			min_price = arr[i];
			min_index = i;
		}
	}

	printf("최댓값: 인덱스 = %d, 값 = %d\n", max_index, max_price);
	printf("최솟값: 인덱스 = %d, 값 = %d\n", min_index, min_price);

}