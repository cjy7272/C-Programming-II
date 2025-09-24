// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 9-7
// 날짜: 2025.09.24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

int main(void)
{
	char phone[] = "02-123-4567";
	char* p = NULL;	

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s\n", p);

	return 0;
}