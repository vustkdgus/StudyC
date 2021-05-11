/*
	�α��� ���α׷�
	1. �޸��忡 id, pw �� �����ϰ� �����̸��� password.txt �� ����
	2. ����ü Login ������ id, password. ����� ���� ������ ��Ű��
	3. Ű����� �ԷµǴ� id�� pw�� ���Ͽ� "�α��εǾ����ϴ�." or "id�� ã�� �� �����ϴ�."
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Login {
	char* id;
	char* password;
}Login;

void read_txt(Login* pa);
void check_id(Login* pa);
void free(Login* pa);

int main(void)
{
	Login s1[5];
	int i;
	
	read_txt(s1);
	check_id(s1);
	free(s1);

	return 0;
}

void read_txt(Login *pa) 
{
	FILE* fp;
	int res;
	char str1[20];
	char str2[20];

	fp = fopen("password.txt", "r");

	if (fp == NULL)
	{
		printf("�Է������� ���� ���߽��ϴ�.\n");
		return 1;
	}

	for (int i = 0; i < 5; i++)
	{
		res = fscanf(fp, "%s %s", str1, str2); // �����Ҵ�

		pa[i].id = (char*)malloc(strlen(str1) + 1);
		if (pa[i].id != NULL)strcpy(pa[i].id, str1);

		pa[i].password = (char*)malloc(strlen(str2) + 1);
		if (pa[i].password != NULL)strcpy(pa[i].password, str2);

		printf("%d : %s %s\n", i, pa[i].id, pa[i].password);
	}

	fclose(fp);
}
void check_id(Login* pa)
{
	char Input_Id[20], Input_Password[20];
	int i;

	printf("���̵� : ");
	scanf("%s", Input_Id);
	printf("�н����� : ");
	scanf("%s", Input_Password);


	for (i = 0; i < 5; i++)
	{
		if (strcmp(pa[i].id, Input_Id) == 0 && strcmp(pa[i].password, Input_Password) == 0)
		{
			printf("�α��εǾ����ϴ�.\n");
			break;
		}
	}
	if (i == 5) printf("id�� ã�� �� �����ϴ�.\n");
}
void free(Login* pa)
{
	for (int i = 0; i < 5; i++)
	{
		free(pa[i].id);
		free(pa[i].password);
	}
}