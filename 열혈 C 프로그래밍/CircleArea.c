#pragma warning(disable: 4996)
#include <stdio.h>

// double�� �����͸� ����� ������ ���Ĺ��� %f�� ���������
// double�� �����͸� �Է� ���� ������ ���Ĺ��� %lf�� ����Ѵ�.

int main(void) {
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area);
	return 0;
}