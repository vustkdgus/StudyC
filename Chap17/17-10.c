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
	union student s1 = { 3.15 }; // ù��° ����� �ʱ�ȭ
	struct student1 s2;

	printf("�й� : %d\n", s1.num);
	//s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	s1.num = 315; // �ٽ� �Է�����ߵ�
	printf("�й� : %d\n", s1.num);

	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2)); // ���� ū��(double)���� ���� �Ҵ��

	return 0;
}