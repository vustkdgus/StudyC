#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][4];
	int total;
	double avg;
	int i, j;
	char* subject[4];

	subject[0] = "����";
	subject[1] = "����";
	subject[2] = "����";
	subject[3] = "ü��";

	for (i = 0; i < 5; i++)
	{
		printf("�л�%d �� ���� ���� ���� ü�� ���� : ", i+1);
		for (j = 0; j < 4; j++)
		{
			// printf("'%s' ���� �Է� : ", subject[j]);
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
		printf("�л� '%d'�� ���� : %d, ��� : %.1lf\n", i+1, total, avg);
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
		printf("'%s'�� ���� : %d, ��� : %.1lf\n",subject[i], total, avg);
	}

	return 0;
}