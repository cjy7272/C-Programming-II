// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 11-1
// 날짜: 2025.10.15

#include <stdio.h>

void test_global(void);

extern int global;

int main(void)
{
	test_global();
	printf("global = %d\n", global);

	return 0;
}