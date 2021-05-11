#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double avg;
int i, j, total;

void info_stu(int(*pa)[4]);
void info_sub(int(*pa)[5]);


int main(void)
{
	int score[5][4];

	for (i = 0; i < 5; i++)
	{
		printf("학생%d 의 국어 영어 수학 체육 점수 : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	printf("\n");
	info_stu(score);
	printf("\n");
	info_sub(score);

	return 0;
}

void info_stu(int (*pa)[4])
{
	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += pa[i][j];
		}
		avg = total / 4.0;
		printf("학생 '%d'의 총점 : %d, 평균 : %.1lf\n", i + 1, total, avg);
	}
}

void info_sub(int (*pa)[4])
{
	char* subject[4] = {"국어", "영어", "수학", "체육"};

	for (i = 0; i < 4; i++)
	{
		total = 0;

		for (j = 0; j < 5; j++)
		{
			total += pa[j][i];
		}
		avg = total / 5.0;
		printf("'%s'의 총점 : %d, 평균 : %.1lf\n", subject[i], total, avg);
	}
}