// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 11-4
// 날짜: 2025.10.15

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_gcd(int x, int y);
extern int get_factorial(int num);

int main(void)
{
	int i;
	srand((unsigned int)time(NULL));

	for (i = 0; i < 5; i++)
	{
		int num = rand() % 10;
		printf("%2d! = %7d\n", num, get_factorial(num));
	}

	for (i = 0; i < 5; i++)
	{
		int a = rand() % 100;
		int b = rand() % 100;
		printf("%2d와 %2d의 GCD = %2d\n", a, b, get_gcd(a, b));
	}

	return 0;
}