// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: �迭�� ���Ҹ� ����Ű�� �����Ϳ� ������ ������ �̿��ؼ� �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� ���α׷�
// ��¥: 2025.9.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0802(void);

int main(void)
{
	asgmt0802();

	return 0;
}

void asgmt0802(void)
{
    double arr[10] = { 0.1, 2.0, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
    double* p;
    int i;

    p = arr;

    for (i = 0; i < 10; i++)
    {

        printf("%.2f ", *(p + i));
    }
}
