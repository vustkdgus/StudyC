#include <stdio.h>

struct student
{
	int num;
	double grade;
};
typedef struct student Student; // student -> Student
void print_data(Student* ps);

/*
typedef struct {
	int num;
	double grade;
}Student;  // 바로 Student로 정의
*/

int main(void)
{
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps -> num);
	printf("학점 : %.1lf\n", ps -> grade);
}