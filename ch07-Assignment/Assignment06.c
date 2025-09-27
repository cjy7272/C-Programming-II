// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 특정 값으로 초기화된 정수형 배열에 대하여 찾을 값을 입력하고 찾은 값의 원소를 출력하는 프로그램
// 날짜: 2025.9.18

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0718(void);

int main(void)
{
    asgmt0718();

    return 0;
}

void asgmt0718(void)
{
    int arr[10];
    int size = 0;
    int num = 0;
    int i = 0;
    int dup = 0;

    while (size < 10)
    {
        printf("배열의 추가할 원소? ");
        scanf("%d", &num);

        int found = 0;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == num)
            {
                printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);

                found = 1;

                break;
            }
        }

        if (found == 0)
        {
            arr[size] = num;
            size++;
        }

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}