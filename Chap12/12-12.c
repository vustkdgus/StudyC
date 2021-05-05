#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);

	if (strncmp(str1, str2, 3) == 0)
		printf("앞의 3글자가 같다");
	else
		printf("앞의 3글자가 다르다");

	return 0;
}