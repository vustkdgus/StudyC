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
}Student;  // �ٷ� Student�� ����
*/

int main(void)
{
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps)
{
	printf("�й� : %d\n", ps -> num);
	printf("���� : %.1lf\n", ps -> grade);
}