// �й�: 202511828
// �̸�: ���ֿ�
// ���α׷� ��: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� ã�� ���� �Է��ϰ� ã�� ���� ���Ҹ� ����ϴ� ���α׷�
// ��¥: 2025.9.18

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void asgmt0718(void);

int main(void)
{
    asgmt0718();

    return 0;
}

void asgmt0718(void)
{
    int arr[10];
    int size = 0;
    int num = 0;
    int i = 0;
    int dup = 0;

    while (size < 10)
    {
        printf("�迭�� �߰��� ����? ");
        scanf("%d", &num);

        int found = 0;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == num)
            {
                printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);

                found = 1;

                break;
            }
        }

        if (found == 0)
        {
            arr[size] = num;
            size++;
        }

        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}