// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 특정 값으로 초기화된 정수형 배열에 대하여 찾을 값을 입력하고 찾은 값의 원소를 출력하는 프로그램
// 날짜: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0705(void);

int main(void)
{
	asgmt0705();

	return 0;
}

void asgmt0705(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int value = 0;
	int index = 0;
	int exist = 0;

	printf("배열: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("찾을 값? ");
	scanf("%d", &value);

	for (int i = 9; i >= 0; i--)
	{
		if (arr[i] == value)
		{
			index = i;
			exist = 1;

			break;
		}
	}
	if (exist == 0)
	{
		printf("찾는 값이 없습니다.\n");
	}
	else
	{
		printf("%d는 %d번째 원소입니다.\n", value, index);
	}




}