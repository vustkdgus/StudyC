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

	printf("���� : %d\n", yumi.pf.age);
	printf("Ű : %.1lf\n", yumi.pf.height);
	printf("�й� : %d\n", yumi.id);
	printf("���� : %.1lf\n", yumi.grade);

	return 0;

}