#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	char b;

	printf("정수하나를 입력하세요 : $ ");
	scanf("%d", &a);
	getchar();
	printf("문자하나를 입력하세요 : $ ");
	scanf(" %c", &b);
	printf("입력된 값은 %d ,%c입니다.\n", a, b);

	return 0;
}