// 학번: 202511828
// 이름: 최주영
// 프로그램 명: 직사각형의 가로 세로의 길이를 입력받은 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램
// 날짜: 2025.10.9

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0811(void);

void get_rect_info(int width, int height, int* area, int* peri);

int main(void)
{
    
    asgmt0811();

    return 0;
}

void asgmt0811(void)
{
    int width, height;
    int area, peri;

    printf("가로? ");
    scanf("%d", &width);
    printf("세로? ");
    scanf("%d", &height);

    get_rect_info(width, height, &area, &peri);

    printf("넓이: %d, 둘레: %d\n", area, peri);
   
}


void get_rect_info(int width, int height, int* area, int* peri)
{
    *area = width * height;
    *peri = 2 * (width + height);
}