#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF) // Ctrl + Z �� �Է�����
		{
			break;
		}
		putchar(ch);
	}

	return 0;
}