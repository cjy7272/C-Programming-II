// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: �Ǽ��� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷�
// ��¥: 2025.9.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0801(void);

int main(void)
{
	asgmt0801();

	return 0;
}

void asgmt0801(void)
{
	double x[2] = { 0 };

	double* p = &x;

	for (int i = 0; i < 3; ++i)
	{
		printf("x[%d]�� �ּ�: %p\n", i, p + i);
	}
}
