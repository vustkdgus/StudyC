//입력과 출력이 있는 함수
#include <stdio.h>

int func(int, int);
int main()
{
	int a, b, result;
	a = 10, b = 20;


	result = func(a, b); // 입력이 있는 함수 호출
	printf("result : %d\n", result);
	return 0;
}

int func(int aa, int ab)
{
	int res;
	res = aa + ab;
	
	return res;
}