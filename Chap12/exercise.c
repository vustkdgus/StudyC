#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch;

	while(1)
	{
		printf("���ڸ� �Է��� �ּ��� : ");
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
				printf("���ĺ��� �ƴմϴ�\n");
		}
	}

	return 0;
}