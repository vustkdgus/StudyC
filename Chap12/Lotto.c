#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void input_lotto(int* pa);
int print_lotto(int* pa);
void lotto_num(int* pa);
int check_lotto(int* pa1, int* pa2);

int main(void)
{
	int lotto[6];
	int win_num[6];
	
	input_lotto(lotto);
	print_lotto(lotto);
	lotto_num(win_num);
	printf("당첨번호 : ");
	print_lotto(win_num);
	printf("당첨갯수 : ");
	check_lotto(lotto, win_num);

	return 0;
}

void lotto_num(int* pa)
{
	int i, j, x;
	for (i = 0; i < 6; i++)
	{
		x = (rand() * 44 / 32767) + 1;
		pa[i] = x;

		for (j = 0; j < i; j++)
		{
			while (1)
			{
				if (pa[i] == pa[j])
				{
					x = (rand() * 44 / 32767) + 1;
					pa[i] = x;
				}
				else break;
			}
		}
	}
}
void input_lotto(int *pa) 
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		printf("%d번째 로또번호를 입력해 주세요 : ", i + 1);
		scanf("%d", pa + i);
		while (1) // 1~45값만 들어가게 
		{
			if (pa[i] > 45 || pa[i] <= 0)
			{
				printf("1에서 45사이의 숫자를 입력해주세요\n");
				printf("%d번째 로또번호를 다시 입력해 주세요 : ", i + 1);
				scanf("%d", pa + i);
			}
			else break;
		}

		for (j = 0; j < i; j++)
		{
			while (1) // 중복체크
			{
				if (pa[i] == pa[j])
				{
					printf("중복된 번호입니다.\n");
					printf("%d번째 로또번호를 다시 입력해 주세요 : ", i + 1);
					scanf("%d", pa + i);
					while (1) // 1~45
					{
						if (pa[i] > 45 || pa[i] <= 0)
						{
							printf("1에서 45사이의 숫자를 입력해주세요\n");
							printf("%d번째 로또번호를 다시 입력해 주세요 : ", i + 1);
							scanf("%d", pa + i);
						}
						else break;
					}
				}
				else break;
			}
		}
	}
}
int print_lotto(int *pa) // 번호출력
{
	int i;
	printf("[ ");
	for (i = 0; i < 6; i++)
	{
		printf(" %d ", pa[i]);
	}
	printf(" ]\n");
}
int check_lotto(int* pa1, int* pa2)
{
	int i, j, count;
	count = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
				if (pa1[i] == pa2[j])
				{
					count++;
				}
		}
	}
	return printf("%d", count);
}
