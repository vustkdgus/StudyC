//입력이 있는 함수
#include <stdio.h>

void func(int, int);
int main()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); // 입력이 있는 ㅎ마수 호출
	return 0;
}

void func(int aa, int ab)
{
	int res;
	res = aa + ab;

	printf("res : %d", res);
}