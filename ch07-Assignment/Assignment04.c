// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� ã�� ���� �Է��ϰ� ã�� ���� ���Ҹ� ����ϴ� ���α׷�
// ��¥: 2025.9.17

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0705(void);

int main(void)
{
	asgmt0705();

	return 0;
}

void asgmt0705(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int value = 0;
	int index = 0;
	int exist = 0;

	printf("�迭: ");

	for (int i = 0; i < 10; i++)
	{

		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("ã�� ��? ");
	scanf("%d", &value);

	for (int i = 9; i >= 0; i--)
	{
		if (arr[i] == value)
		{
			index = i;
			exist = 1;

			break;
		}
	}
	if (exist == 0)
	{
		printf("ã�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("%d�� %d��° �����Դϴ�.\n", value, index);
	}




}