#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);  // 정수
	a = -1;
	printf("%u\n", a); // 양수

	return 0;
}