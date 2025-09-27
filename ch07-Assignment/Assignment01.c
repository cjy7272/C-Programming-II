// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 첫 번째? 항의 값과 공차를 입력받아서 등차수열을 출력하는 프로그램
// 날짜: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0701(void);

int main(void)
{
	asgmt0701();

	return 0;
}

void asgmt0701(void)
{
	int a = 0;
	int b = 0;
	int sum = 0;

	printf("첫 번째 항? ");
	scanf("%d", &a);

	printf("공차? ");
	scanf("%d", &b);

	int ap[10];
	sum = a;

	for (int i = 0; i < 10; i++)
	{
		ap[i] = sum;
		sum += b;
	}

	printf("등차수열: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", ap[i]);
	}

}