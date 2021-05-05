#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("한 숫자를 입력해 주세요 : ");
	scanf("%c", &ch);
	if (isdigit(ch) != 0)
	{
		printf("숫자를 입력하셨습니다.\n");
	}
	else
	{
		printf("숫자가 아닙니다.\n");
	}
}