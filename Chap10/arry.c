#include <stdio.h>

int main()
{
	int a = 10;		// �ڵ����� ����(��������)
	int* pa;		// ������ ���� ����
	pa = &a;		// ������ ������ ���� a�� �ּҸ� ����
	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;

	printf("���� a�� ����� �� : %d\n", a);
	printf("���� a�� �ּ� : %p\n", a);
	printf("������ ���� pa�� ����� �� : %p\n", pa);
	printf("���� a�� ����� �� : %p\n", *pa);	// *�� ���������������̴�.
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, ary[i]);
		ary[i]++;
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, pary[i]);
		pary[i]++;
	}
	
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, *(pary + i));
	}

	return 0;
}