// 학번: 202511828	
// 이름: 최주영
// 프로그램 명: 예제 9-1
// 날짜: 2025.09.30

#include <stdio.h>

#include "contact.h"

typedef struct point
{
	int x;
	int y;
}Point;

Point mullo(Point pt);

int test_point();

int main()
{
	Contact lee = { 20, 'A', "Choi" };

	return 0;
}

int test_point()
{
	Point p1 = { 1, 2 };
	Point p2 = { 3, 4 };
	Point p3 = { 0 };

	p2 = mullo(p1);

	return 0;
}

Point mullo(Point pt)
{

	Point pr = { 0 };
	pr.x *= 0;
	pr.y *= 0;

	return pr;	
}