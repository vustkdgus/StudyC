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
void define(int (*fp)(int, int));

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

		printf("�����ȣ�� �Է��ϼ��� : ");
		scanf(" %c", &giho);

		switch (giho)
		{
		case '+':
			define(sum);
			break;
		case '-':
			define(sub);
			break;
		case '*':
			define(mul);
			break;
		case '/':
			divi(a, b);
			break;

		default:
			printf("��Ȯ�� ��ȣ�� �Է��ϼ���.\n");
			break;
		}
	}

	return 0;
}


int sum(int x, int y)
{
	return (x + y);
}
int sub(int x, int y)
{
	return (x - y);
}
int mul(int x, int y)
{
	return (x * y);
}
int divi(int x, int y)
{
	if (y == 0)
	{
		printf("0���δ� ���� �� �����ϴ�.\n");
	}
	else
	{
		result = (double)x / (double)y;

		return printf("a / b = %d\n", result);
	}

}
void define(int (*fp)(int, int))
{
	int a, b;
	int res;
	printf("a�� ���� �Է��ϼ��� a : ");
	scanf("%d", &a);

	printf("b�� ���� �Է��ϼ��� b : ");
	scanf("%d", &b);

	res = fp(a, b);

	printf("������� %d\n", res);
}