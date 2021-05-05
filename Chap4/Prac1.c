#include <stdio.h>
int main(void)
{
	int ch = 128;
	unsigned char ch1 = 128;

	printf("ch >> 1 : %d\n", ch >> 1);
	printf("ch1 >> 1 : %d\n",ch1 >> 1);
	return 0;
}