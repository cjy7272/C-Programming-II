// �й�: 202511828	
// �̸�: ���ֿ�
// ���α׷� ��: ���� 9-4
// ��¥: 2025.09.24

#define _CRT_SECURE_NO_WARNINGS					//���̺� ��� �տ� �����Ѵ�
#include <stdio.h>
#include <string.h>							    //���ڿ� ö �Լ� ��� �� ����
#define SIZE 10

int main(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2)								// s1�� �ּҿ� s2�� �ּҸ� ���ϸ� �ȵȴ�.
	{
		printf("same address\n");
	}

	if (strcmp(s1,s2) == 0)						// s1�� s2�� ������ ���Ѵ�.
	{
		printf("same string\n");
	}

	printf("�н�����? ");
	scanf("%s", password);						// �н����带 �Է¹޴´�.
	if (strcmp(password, "abcd1234") == 0)		// ��ϵ� �н������ ���Ѵ�.
	{
		printf("iogin succeeded\n");
	}
	else
	{
		printf("login fialed\n");
	}

	return 0;
}