// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 프로그램
// 날짜: 2025.10.9

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fill_2d_array(int (*arr)[5], int rows, int value);

void asgmt0809(void);

int main(void)
{
    asgmt0809();

    return 0;
}

void asgmt0809(void)
{
    int arr[4][5];
    int value;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &value);

    fill_2d_array(arr, 4, value);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void fill_2d_array(int (*arr)[5], int rows, int value)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = value;
        }
    }
}