#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	int age = 0;
	char addr[50];

	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("���� �Է� : ");
	scanf("%d", &age);
	printf("�ּ� �Է� : ");
	scanf("%s", addr);
	printf("%s�Դϴ�. ���̴� %d�̰� �ּҴ� %s �Դϴ�.\n", name, age, addr);

	return 0;
}