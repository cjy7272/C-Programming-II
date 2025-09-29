// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 배열의 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든 원소를 출력하는 프로그램
// 날짜: 2025.9.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0802(void);

int main(void)
{
	asgmt0802();

	return 0;
}

void asgmt0802(void)
{
    double arr[10] = { 0.1, 2.0, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
    double* p;
    int i;

    p = arr;

    for (i = 0; i < 10; i++)
    {

        printf("%.2f ", *(p + i));
    }
}
