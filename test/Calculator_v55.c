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
#include <stdlib.h> 

int sum(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
void cases();
void define();

char giho, quit;
int a, b, result;
double div1;

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
	/*printf("a�� ���� �Է��ϼ��� a : ");
	scanf("%d", &a);*/

	char ch;

	while (1)
	{
		fflush(stdin);
		printf("a�� ���� �Է��ϼ��� a : ");
		scanf(" %s", &ch);
		if (isdigit(ch) == 0) // �Է��� ���� �������� �Ǻ�
		{
			printf("���ڰ� �ƴմϴ�.\n");
		}
		else
		{
			 printf(" %s \n",ch);
			// a = atoi(ch);
			// a = (int)ch - 48;
			break;
		}
	}

	fflush(stdin);
	printf("b�� ���� �Է��ϼ��� b : ");
	scanf("%d", &b);

	fflush(stdin);
	printf("�����ȣ�� �Է��ϼ��� : ");
	scanf(" %c", &giho);
}