//�Է°� ����� �ִ� �Լ�
#include <stdio.h>

int func(int, int);
int main()
{
	int a, b, result;
	a = 10, b = 20;


	result = func(a, b); // �Է��� �ִ� �Լ� ȣ��
	printf("result : %d\n", result);
	return 0;
}

int func(int aa, int ab)
{
	int res;
	res = aa + ab;
	
	return res;
}