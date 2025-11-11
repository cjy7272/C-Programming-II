// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램
// 날짜: 2025.11.10

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt01();

int main()
{
	asgmt01();

}

void asgmt01()
{
    char filename[50];
    char line[50];
    int linenumber = 1;

    printf("파일명? ");
    scanf("%s", filename);

    FILE* fp = NULL;

    fp = fopen(filename, "r");

    if (fp == NULL) 
    {
        printf("파일을 열 수 없습니다\n");

        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) 
    {
        printf("  %d: %s", linenumber, line);

        linenumber++;
    }

    fclose(fp);

}