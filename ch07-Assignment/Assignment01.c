// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: ù ��°? ���� ���� ������ �Է¹޾Ƽ� ���������� ����ϴ� ���α׷�
// ��¥: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0701(void);

int main(void)
{
	asgmt0701();

	return 0;
}

void asgmt0701(void)
{
	int a = 0;
	int b = 0;
	int sum = 0;

	printf("ù ��° ��? ");
	scanf("%d", &a);

	printf("����? ");
	scanf("%d", &b);

	int ap[10];
	sum = a;

	for (int i = 0; i < 10; i++)
	{
		ap[i] = sum;
		sum += b;
	}

	printf("��������: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", ap[i]);
	}

}