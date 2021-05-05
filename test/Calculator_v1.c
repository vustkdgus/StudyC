/*
	Calculatro_v2.c

	Created : 2021-04-28
	Author : 편상현
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b;
	int add,sub,mul,inv;

	printf("a의 값을 입력하세요 a : ");
	scanf("%d", &a);
	printf("b의 값을 입력하세요 b : ");
	scanf("%d", &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a + b = %d\n", add);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("-a = %d\n", inv);

	
}