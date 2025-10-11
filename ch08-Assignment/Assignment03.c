// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 정수형 배열에 대하여 배열의 원소중 최댓값과 최솟값을 찾아서 출력하는 프로그램
// 날짜: 2025.10.9

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0806(void);

void get_min_max(int* arr, int size, int* min, int* max);

int main(void)
{
    asgmt0806();

    return 0;
}

void asgmt0806(void)
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int min, max;

    get_min_max(arr, 10, &min, &max);

    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
}



void get_min_max(int* arr, int size, int* min, int* max)
{
    *min = *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}