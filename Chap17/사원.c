#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
	int id;
	char* name;
	int salary;
}Employee;

int main(void)
{
	int i;
	int total = 0;

	Employee list[5];
	char str[20];

	for (i = 0; i < 5; i++)
	{
		printf("�����ȣ, �̸�, �޿��� �Է����ּ��� : ");
		scanf("%d %s %d", &list[i].id, str, &list[i].salary);
		list[i].name = (char*)malloc(strlen(str) + 1);
		if(list[i].name != NULL)strcpy(list[i].name, str);
		
		total += list[i].salary;
	}
	printf("\n");
	printf("-------------------------------------------\n");
	printf("�����ȣ	  �̸�		�޿�\n");
	printf("-------------------------------------------\n");

	for (i = 0; i < 5; i++)
	{
		printf("%d		   %s  	         %d \n", list[i].id, list[i].name, list[i].salary);
	}
	printf("-------------------------------------------\n");
	int avg = total / 5;
	printf("�޿��հ� : %d\n", total);
	printf("�޿���� : %d", avg);

	for (i = 0; i < 5; i++)
	{
		free(list[i].name);
	}
	

	return 0;
}