// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 실수형 배열의 모든 원소의 주소를 출력하는 프로그램
// 날짜: 2025.9.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0801(void);

int main(void)
{
	asgmt0801();

	return 0;
}

void asgmt0801(void)
{
	double x[2] = { 0 };

	double* p = &x;

	for (int i = 0; i < 3; ++i)
	{
		printf("x[%d]의 주소: %p\n", i, p + i);
	}
}
