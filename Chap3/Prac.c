#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	int age = 0;
	char addr[50];

	printf("이름 입력 : ");
	scanf("%s", name);
	printf("나이 입력 : ");
	scanf("%d", &age);
	printf("주소 입력 : ");
	scanf("%s", addr);
	printf("%s입니다. 나이는 %d이고 주소는 %s 입니다.\n", name, age, addr);

	return 0;
}