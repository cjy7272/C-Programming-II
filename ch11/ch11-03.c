// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 11-3
// 날짜: 2025.10.15

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void accumulator(char op, int operand);

int main(void)
{
	while (1)
	{
		char op;
		int num;
		printf("연산자와 정수를 입력하세요(. 0 입력시 종료): ");
		scanf(" %c %d", &op, &num);
		if (op == '.' && num == 0)
			break;
		accumulator(op, num);
	}

	return 0;
}

void accumulator(char op, int operand)
{
	static int result = 0;
	switch (op)
	{
	case '+':
		result += operand;
		break;
	case '-':
		result -= operand;
		break;
	case '*':
		result *= operand;
		break;
	case '/':
		if (operand != 0)
			result /= operand;
	default:
		return;
	}
	printf("%c %d = %d\n", op, operand, result);
}