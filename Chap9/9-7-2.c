#include <stdio.h>

int a = 10, b = 20;

void swap(int, int);

int main(void)
{
	
	printf("Àü a : %d, b: %d\n", a, b);

	swap(&a, &b);
	printf("ÈÄ a : %d, b: %d\n", a, b);

	return 0;
}


void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}