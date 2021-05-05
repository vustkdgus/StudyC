#include <stdio.h>

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int size = sizeof(ary) / sizeof(ary[0]);
	for (int i = 0;  i < size; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	
	for (int i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\n", size - i - 1, ary[size - i - 1]);
	}

	return 0;
}