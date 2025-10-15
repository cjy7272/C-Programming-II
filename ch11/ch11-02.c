// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 11-2
// 날짜: 2025.10.15

#include <stdio.h>

void_test_static(void)
{
	int local = 0;
	static int s_local = 0;

	printf("local = %d, ", local);
	printf("s_local = %d\n", s_local);
}

int main(void)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test_static();
	}

	return 0;
}
