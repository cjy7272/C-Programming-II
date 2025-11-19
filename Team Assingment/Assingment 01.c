#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void assingment_input();

void assingment_31(int);

void assingment_change(int);

void main()
{
	assingment_input();

	return 0;

}

void assingment_input()
{
	int money = 0;

	printf("금액을 입력하고 Enter: ");
	scanf("%d", &money);

	assingment_31(money);

}

void assingment_31(int money)
{
	int select = 0;

	int sell_coffee = 0;
	int sell_cola = 0;
	int sell_juice = 0;
	
	if (money >= 330)
	{
		sell_coffee = 1;
		printf("1. 커피 (330원) 판매가능 \n");

	}
	else
	{
		sell_coffee = 0;
		printf("1. 커피 (330원) 판매불가 \n");
	}

	if (money >= 480)
	{
		sell_cola = 1;
		printf("2. 콜라 (480원) 판매가능 \n");

	}
	else
	{
		sell_cola = 0;
		printf("2. 콜라 (480원) 판매불가 \n");
	}

	if (money >= 600)
	{
		sell_juice = 1;
		printf("3. 주스 (600원) 판매가능 \n");

	}
	else
	{
		sell_juice = 0;
		printf("3. 주스 (600원) 판매불가 \n");
	}
	printf("4. 취소\n");

	printf("현재 금액: %d\n", money);

	printf("\n");

	printf("번호를 선택하고 Enter: ");
	scanf("%d", &select);

	if (select == 1)
	{
		if (sell_coffee == 1)
		{
			printf("커피를 받으세요. \n");
			assingment_change(money - 300);
		}
		else
		{
			printf("금액이 부족합니다. \n");
			assingment_change(money);
		}
	}
	else if (select == 2)
	{
		if (sell_cola == 1)
		{
			printf("주스를 받으세요. \n");
			assingment_change(money - 480);
		}
		else
		{
			printf("금액이 부족합니다. \n");
			assingment_change(money);
		}
	}
	else if (select == 3)
	{
		if (sell_juice == 1)
		{
			printf("주스를 받으세요. \n");
			assingment_change(money - 600);
		}
		else
		{
			printf("금액이 부족합니다. \n");
			assingment_change(money);
		}
	}
	else if (select == 4)
	{
		printf("취소되었습니다.");

		return 0;
	}
}

void assingment_change(int change)
{
	printf("\n");
	printf("거스름 돈 총액: %d\n", change);
	printf("\n");
	printf(" 오백원: %d개\n", change / 500);
	change = change % 500;	
	printf(" 백원  : %d개\n", change / 100);
	change = change % 100;
	printf(" 오십원: %d개\n", change / 50);
	change = change % 50;
	printf(" 십원  : %d개\n", change / 10);
	change = change % 10;
	printf("\n");

	assingment_input();
}
