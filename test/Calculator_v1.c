/*
	Calculatro_v2.c

	Created : 2021-04-28
	Author : �����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b;
	int add,sub,mul,inv;

	printf("a�� ���� �Է��ϼ��� a : ");
	scanf("%d", &a);
	printf("b�� ���� �Է��ϼ��� b : ");
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