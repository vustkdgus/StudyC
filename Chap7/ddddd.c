#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("�� ���ڸ� �Է��� �ּ��� : ");
	scanf("%c", &ch);
	if (isdigit(ch) != 0)
	{
		printf("���ڸ� �Է��ϼ̽��ϴ�.\n");
	}
	else
	{
		printf("���ڰ� �ƴմϴ�.\n");
	}
}