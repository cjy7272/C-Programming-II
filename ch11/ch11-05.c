// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 11-5
// 날짜: 2025.10.15

#include <stdio.h>

int get_factorial(int num);

int main(void)
{
	int i;

	for (i = 0; i<= 10; i++)
	{
		printf("%2d! = %7d\n", i, get_factorial(i));
	}

	return 0;
}

int get_factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * get_factorial(num - 1);
}