#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch;

	while(1)
	{
		printf("문자를 입력해 주세요 : ");
		scanf(" %c", &ch);
		if (ch == '1')
			break;
		else
		{
			if (ch >= 'A' && ch <= 'Z')
				printf("%c -> %c\n", ch, ch + 32);
			else if (ch >= 'a' && ch <= 'z')
				printf("%c -> %c\n", ch, ch - 32);
			else
				printf("알파벳이 아닙니다\n");
		}
	}

	return 0;
}