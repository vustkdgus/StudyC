/*
	로그인 프로그램
	1. 메모장에 id, pw 를 저장하고 파일이름은 password.txt 로 저장
	2. 구조체 Login 변수에 id, password. 멤버에 각각 저장을 시키고
	3. 키보드로 입력되는 id와 pw를 비교하여 "로그인되었습니다." or "id를 찾을 수 없습니다."
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
		printf("입력파일을 열지 못했습니다.\n");
		return 1;
	}

	for (int i = 0; i < 5; i++)
	{
		res = fscanf(fp, "%s %s", str1, str2); // 동적할당

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

	printf("아이디 : ");
	scanf("%s", Input_Id);
	printf("패스워드 : ");
	scanf("%s", Input_Password);


	for (i = 0; i < 5; i++)
	{
		if (strcmp(pa[i].id, Input_Id) == 0 && strcmp(pa[i].password, Input_Password) == 0)
		{
			printf("로그인되었습니다.\n");
			break;
		}
	}
	if (i == 5) printf("id를 찾을 수 없습니다.\n");
}
void free(Login* pa)
{
	for (int i = 0; i < 5; i++)
	{
		free(pa[i].id);
		free(pa[i].password);
	}
}