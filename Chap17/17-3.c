#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yumi;

	yumi.pf.age = 17;
	yumi.pf.height = 164.5;
	yumi.id = 315;
	yumi.grade = 4.3;

	printf("나이 : %d\n", yumi.pf.age);
	printf("키 : %.1lf\n", yumi.pf.height);
	printf("학번 : %d\n", yumi.id);
	printf("학점 : %.1lf\n", yumi.grade);

	return 0;

}