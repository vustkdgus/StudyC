/*pointer Exam.c

date : 2021-04-30
Author : �� �� ��
description :
1. 10 ���� ������ �Է¹޾� �迭�� �����Ѵ�.
2. �迭�� ����Ѵ�.
3. �迭�� ����� ���� 9 <-> 0, 8<-> 1,.... ���·� ��ȯ */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void print_ary(int* pa, int size);
void swap_ary(int* pa, int size);

int main(void)
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	printf("---------------��ȯ��---------------\n");
	print_ary(ary, size);
	swap_ary(ary, size);
	printf("---------------��ȯ��---------------\n");
	print_ary(ary, size);

	return 0;
}

void input_ary(int *pa, int size)
{
	int i;

	printf("%d���� ������ �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", pa + i);
	}
}
void print_ary(int *pa, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("ary[%d] : %d\n", i, pa[i]);
	}
}
void swap_ary(int *pa, int size)
{
	
	/*int i, temp;
	for (i = 0; i < size/2; i++)
	{
		temp = pa[i];
		pa[i] = pa[size - i - 1];
		pa[size - i - 1] = temp;
	}*/
	int *poi1, *poi2, i;
	for (i = 0; i < size / 2; i++)
	{
		poi1 = pa[i];
		poi2 = pa[size - i - 1];
		pa[i] = poi2;
		pa[size - i - 1] = poi1;
	}
}