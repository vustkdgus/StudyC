#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, i, mul;
	printf("몇단 구구단을 출력할까요? : ");
	scanf("%d", &a);

	
	for (i = 1; i < 10; i++)
	{
		mul = a * i;
		printf("%d * %d = %d\n", a, i, mul);
	}
}