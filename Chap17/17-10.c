#include <stdio.h>

union student
{
	int num;
	double grade;
};

struct student1
{
	int num;
	double grade;
};

int main(void)
{
	union student s1 = { 3.15 }; // 첫번째 멤버만 초기화
	struct student1 s2;

	printf("학번 : %d\n", s1.num);
	//s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	s1.num = 315; // 다시 입력해줘야됨
	printf("학번 : %d\n", s1.num);

	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2)); // 제일 큰것(double)으로 전부 할당됨

	return 0;
}