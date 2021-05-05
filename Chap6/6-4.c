#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i < 6; i++)
	{
		for (k = i; k < 5; k++)
		{
			printf(" ");
		}
		for (j = 5 - 2 * i; j < 6; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 6; i++)
	{
		for (k = 5 - i; k < 5; k++)
		{
			printf(" ");
		}
		for (j = 2 * i - 5; j < 6; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}