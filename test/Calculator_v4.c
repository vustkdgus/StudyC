/*
	Calculatro_v4.c

	Created : 2021-04-29
	Author : �����
*/
// v2 - �����ȣ �Է��߰�
// v3 - ���ѷ���, ���ѷ����� �����߰�
// v4 - �Լ��߰�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
void cases();
void define();

char giho, quit;
int a, b, result;
double div;

int main(void)
{
	while (1)
	{
		printf("�����Ͻ÷��� q, ����Ͻ÷��� �ƹ�Ű�� �Է����ּ��� : ");
		scanf(" %c", &quit);
		if (quit == 'q')
			break;

		define();
		cases();
		
	}
}


int sum(int x, int y)
{
	int result;

	result = x + y;

	return printf("a + b = %d\n", result);
}
int sub(int x, int y)
{
	int result;

	result = x - y;

	return printf("a - b = %d\n", result);
}
int mul(int x, int y)
{
	int result;

	result = x * y;

	return printf("a * b = %d\n", result);
}
int divi(int x, int y)
{
	if (y == 0)
	{
		printf("0���δ� ���� �� �����ϴ�.\n");
	}
	else
	{
		int result;

		result = (double)x / (double)y;

		return printf("a / b = %d\n", result);
	}
	
}
void cases() 
{
	switch (giho)
	{
	case '+':
		sum(a, b);
		break;
	case '-':
		sub(a, b);
		break;
	case '*':
		mul(a, b);
		break;
	case '/':
		divi(a, b);
		break;

	default:
		printf("��Ȯ�� ��ȣ�� �Է��ϼ���.\n");
		break;
	}
}
void define()
{
	printf("a�� ���� �Է��ϼ��� a : ");
	scanf("%d", &a);

	printf("b�� ���� �Է��ϼ��� b : ");
	scanf("%d", &b);
	printf("�����ȣ�� �Է��ϼ��� : ");
	scanf(" %c", &giho);
}