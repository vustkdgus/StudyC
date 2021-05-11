#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][4];
	int total;
	double avg;
	int i, j;
	char* subject[4];

	subject[0] = "국어";
	subject[1] = "영어";
	subject[2] = "수학";
	subject[3] = "체육";

	for (i = 0; i < 5; i++)
	{
		printf("학생%d 의 국어 영어 수학 체육 점수 : ", i+1);
		for (j = 0; j < 4; j++)
		{
			// printf("'%s' 점수 입력 : ", subject[j]);
			scanf("%d", &score[i][j]);
		}
	}

	printf("\n");

	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("학생 '%d'의 총점 : %d, 평균 : %.1lf\n", i+1, total, avg);
	}

	printf("\n");

	for (i = 0; i < 4; i++)
	{
		total = 0;
		for (j = 0; j < 5; j++)
		{
			total += score[j][i];
		}
		avg = total / 5.0;
		printf("'%s'의 총점 : %d, 평균 : %.1lf\n",subject[i], total, avg);
	}

	return 0;
}