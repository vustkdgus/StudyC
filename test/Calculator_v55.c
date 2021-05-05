/*
	Calculatro_v4.c

	Created : 2021-04-29
	Author : 편상현
*/
// v2 - 연산기호 입력추가
// v3 - 무한루프, 무한루프문 종료추가
// v4 - 함수추가
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
		printf("종료하시려면 q, 계속하시려면 아무키나 입력해주세요 : ");
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
		printf("0으로는 나눌 수 없습니다.\n");
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
		printf("정확한 기호를 입력하세요.\n");
		break;
	}
}
void define()
{
	/*printf("a의 값을 입력하세요 a : ");
	scanf("%d", &a);*/

	char ch;

	while (1)
	{
		fflush(stdin);
		printf("a의 값을 입력하세요 a : ");
		scanf(" %s", &ch);
		if (isdigit(ch) == 0) // 입력한 값이 숫자인지 판별
		{
			printf("숫자가 아닙니다.\n");
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
	printf("b의 값을 입력하세요 b : ");
	scanf("%d", &b);

	fflush(stdin);
	printf("연산기호를 입력하세요 : ");
	scanf(" %c", &giho);
}