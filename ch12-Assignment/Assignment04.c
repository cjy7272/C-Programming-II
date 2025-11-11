// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 Login 구조체 배열로 읽어온 다음 입력받은 아이디와 패스워드가 일치하면 "로그인 성공" 아니면 "로그인 실패" 라고 출력하는 프로그램
// 날짜: 2025.11.10

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char id[20];
    char pw[20];
}Login;

void asgmt04();

int main() 
{
    asgmt04();

}

void asgmt04() 
{
    Login users[SIZE];
    FILE* fp;

    int count = 0;
    char id[20];
    char pw[20];

    fp = fopen("password.txt", "r");

    if (fp == NULL) 
    {
        printf("파일을 열 수 없습니다.");

        return 1;
    }

    while (fscanf(fp, "%s %s", users[count].id, users[count].pw) == 2) 
    {
        count++;
        if (count >= SIZE) break;
    }
    fclose(fp);

    while (1)
    {
        printf("ID? ");
        scanf("%s", id);

        if (strcmp(id, ".") == 0)
        {
            printf("프로그램 종료\n");
            return;
        }

        int found = 0;

        for (int i = 0; i < count; i++)
        {
            if (strcmp(id, users[i].id) == 0)
            {
                found = 1;

                printf("Password? ");
                scanf("%s", pw);

                if (strcmp(pw, users[i].pw) == 0)
                {
                    printf("로그인 성공\n");
                }
                else
                {
                    printf("로그인 실패\n");
                }

                break;
            }
        }

        if (!found)
        {
            printf("아이디를 찾을 수 없습니다.\n");
        }
    }
}