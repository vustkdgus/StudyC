#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);

	if (strncmp(str1, str2, 3) == 0)
		printf("���� 3���ڰ� ����");
	else
		printf("���� 3���ڰ� �ٸ���");

	return 0;
}