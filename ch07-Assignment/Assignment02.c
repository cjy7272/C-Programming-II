// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �ִ񰪰� �ּڰ��� ã�Ƽ� ����ϴ� ���α׷�
// ��¥: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0703(void);

int main(void)
{
	asgmt0703();

	return 0;
}

void asgmt0703(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	printf("�迭: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", arr[i]);
	}

	printf("\n");

	int max_price = arr[0];
	int min_price = arr[0];

	for (int i = 1; i < 10; i++)
	{
		if (arr[i] >= max_price)
		{
			max_price = arr[i];

		}
		else if (arr[i] <= min_price)
		{
			min_price = arr[i];

		}
	}
	printf("�ִ�: %d\n", max_price);
	printf("�ּڰ�: %d\n", min_price);



}