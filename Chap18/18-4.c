#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF) // Ctrl + Z 로 입력종료
		{
			break;
		}
		putchar(ch);
	}

	return 0;
}