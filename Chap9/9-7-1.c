#include <stdio.h>

int a = 10, b = 20;

void swap();
int main(void)
{
	
	printf("Àü a : %d, b: %d \n", a, b);
	
	swap(a, b);
	printf("ÈÄ a : %d, b: %d \n", a, b);

	return 0;
}

void swap()
{
	int temp = a;
	a = b;
	b = temp;
}