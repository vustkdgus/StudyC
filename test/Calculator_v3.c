/*
	Calculatro_v3.c

	Created : 2021-04-29
	Author : �����
*/
// v2 - �����ȣ �Է��߰�
// v3 - ���ѷ���, ���ѷ����� �����߰�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b;
	int result;
	double div;
	char giho, quit;
	while (1)
	{

		printf("�����Ͻ÷��� q, ����Ͻ÷��� �ƹ�Ű�� �Է����ּ��� : ");
		scanf(" %c", &quit);
		if (quit == 'q')
			break;

		printf("a�� ���� �Է��ϼ��� a : ");
		scanf("%d", &a);
		printf("b�� ���� �Է��ϼ��� b : ");
		scanf("%d", &b);
		printf("�����ȣ�� �Է��ϼ��� : ");
		scanf(" %c", &giho);

		switch (giho)
		{
		case '+':
			result = a + b;
			printf("a + b = %d\n", result);
			break;
		case '-':
			result = a - b;
			printf("a - b = %d\n", result);
			break;
		case '*':
			result = a * b;
			printf("a * b = %d\n", result);
			break;
		case '/':
			if (b == 0)
			{
				printf("0���δ� ���� �� �����ϴ�.\n");
			}
			else
			{
				div = (double)a / (double)b;
				printf("a / b = %.1lf\n", div);
				break;
			}
		default:
			printf("��Ȯ�� ��ȣ�� �Է��ϼ���.\n");
			break;
		}
	}
}