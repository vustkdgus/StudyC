/*
	Calculatro_v3.c

	Created : 2021-04-29
	Author : 편상현
*/
// v2 - 연산기호 입력추가
// v3 - 무한루프, 무한루프문 종료추가
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

		printf("종료하시려면 q, 계속하시려면 아무키나 입력해주세요 : ");
		scanf(" %c", &quit);
		if (quit == 'q')
			break;

		printf("a의 값을 입력하세요 a : ");
		scanf("%d", &a);
		printf("b의 값을 입력하세요 b : ");
		scanf("%d", &b);
		printf("연산기호를 입력하세요 : ");
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
				printf("0으로는 나눌 수 없습니다.\n");
			}
			else
			{
				div = (double)a / (double)b;
				printf("a / b = %.1lf\n", div);
				break;
			}
		default:
			printf("정확한 기호를 입력하세요.\n");
			break;
		}
	}
}