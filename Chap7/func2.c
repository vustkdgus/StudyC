#include <stdio.h>


void func();	// �Լ� ����(����)
int main(void)
{
	func(); // func �Լ� ȣ��
	return 0;
}

void func() // �Է°� ����� ���� �Լ�
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res : %d", res);
}