#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int size, i;
	char ch[40];
	while (1)
	{
		printf("단어를 입력해주세요 : "); // 값 입력받음
		scanf("%s", ch);
		size = strlen(ch);

		if (ch[0] == '0') // 0을 입력하면 프로그램종료
			break;

		printf("'");
		for (i = 0; i < size; i++)
		{
			printf("%c", ch[i]);
		}
		printf("'");

		for (i = 0; i < size / 2; i++) // i,(size - i)번째 값이 다르면 for문 탈출
		{
			if (ch[i] == ch[size - i - 1])
			{
				continue;
			}
			else
			{
				printf("는 회문이 아닙니다.\n");
				break;
			}
		}

		if (i == size / 2) // i값을 비교해서 회문인지 확인
			printf("는 회문입니다.\n");
	}
}
