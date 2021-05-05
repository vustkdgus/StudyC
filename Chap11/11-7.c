#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, grade;
	
	printf("학번 입력 : "); // 문자다음 정수입력하면 getchar쓸 필요없음
	scanf("%d", &num);
	getchar();
	printf("학점 입력 :");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}