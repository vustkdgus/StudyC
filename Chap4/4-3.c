#include <stdio.h>
int main(void)
{
	int a = 10, b = 10;
	int c = 10, d = 10;

	++a;
	--b;
	c++;
	d--;

	printf("a : %d\n", a);
	printf("b : %d\n", b);
	printf("c : %d\n", c);
	printf("d : %d\n", d);

	return 0;
}