#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade;
	
	printf("�й� �Է� : "); // ���ڴ��� �����Է��ϸ� getchar�� �ʿ����
	scanf("%d", &num);
	getchar();
	printf("���� �Է� :");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}