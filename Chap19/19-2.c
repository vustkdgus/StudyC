#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다.\n")

int main(void)
{
	double radious, area;

	printf("반지름을 입력하세요(10 이하) : ");
	scanf("%lf", &radious);
	area = PI * radious * radious;
	if (area > LIMIT) ERR_PRN;
	else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

	return 0;
}