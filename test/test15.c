#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int size, i;
	char ch[40];
	while (1)
	{
		printf("�ܾ �Է����ּ��� : "); // �� �Է¹���
		scanf("%s", ch);
		size = strlen(ch);

		if (ch[0] == '0') // 0�� �Է��ϸ� ���α׷�����
			break;

		printf("'");
		for (i = 0; i < size; i++)
		{
			printf("%c", ch[i]);
		}
		printf("'");

		for (i = 0; i < size / 2; i++) // i,(size - i)��° ���� �ٸ��� for�� Ż��
		{
			if (ch[i] == ch[size - i - 1])
			{
				continue;
			}
			else
			{
				printf("�� ȸ���� �ƴմϴ�.\n");
				break;
			}
		}

		if (i == size / 2) // i���� ���ؼ� ȸ������ Ȯ��
			printf("�� ȸ���Դϴ�.\n");
	}
}
