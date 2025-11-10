// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 텍스트 파일의 이름을 입력받아서 파일내의 문자들에 대하여 영문자의 개수를 문자별로 세서 출력하는 프로그램
// 날짜: 2025.11.10

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int asgmt03();

int main()
{
	asgmt03();
}

int asgmt03()
{
    char filename[50];
    char line[100];
    int letterCount[26] = {0};

    FILE* fp = NULL;

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다\n");

        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);

        for (int i = 0; line[i] != '\0'; i++) 
        {
            char ch = line[i];

            
            if (ch >= 'A' && ch <= 'Z') 
            {
                ch = ch + ('a' - 'A');
                letterCount[ch - 'a']++;
            }
            else if (ch >= 'a' && ch <= 'z') 
            {
                letterCount[ch - 'a']++;
            }
        }
    }

    fclose(fp);

    int count = 0;

	printf("\n");

    for (int i = 0; i < 26; i++) 
    {
        if (letterCount[i] > 0) 
        {
            printf("%c : %d   ", 'a' + i, letterCount[i]);

            count++;

            if (count % 11 == 0)
            {
                printf("\n");

            }
        }
    }
}