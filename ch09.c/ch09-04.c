// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 9-3
// 날짜: 2025.09.24

#define _CRT_SECURE_NO_WARNINGS						//라이브 헤더 앞에 정의한다
#include <stdio.h>
#include <string.h>									//문자열 철 함수 사용 시 포함
#define SIZE 32

int main(void)
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	char temp[SIZE];

	printf("2개의 문자열? ");
	scanf("%s %s", str1, str2);						// 빈칸으로 구분해서 문자열 입력
	printf("str1 = %s, str2 = %s\n", str1, str2);

	// 두 문자 배열의 swap한다.	
	strcpy(temp, str1);								// str1을 temp에 복사한다.
	strcpy(str1, str2);								// str2를 str1에 복사한다.
	strcpy(str2, temp);								// temp를 str2로 복사한다.
	
	printf("str1 = %s, str2 = %s\n", str1, str2);

	return 0;	
}