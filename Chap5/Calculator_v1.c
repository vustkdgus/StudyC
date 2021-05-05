/*
	Calculatro_v1.c

	Created : 2021-04-28
	Author : 편상현
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b;
	int sum, sub, mul;
	double div;

	printf("a의 값을 입력하세요 a : ");
	scanf("%d", &a);
	printf("b의 값을 입력하세요 b : ");
	scanf("%d", &b);
	
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = (double)a / (double)b;

	printf("a + b = %d\n", sum);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("a / b = %.1lf\n", div);
	
}