#pragma warning(disable: 4996)
#include <stdio.h>

// �Ǽ��� �Է°������� e ǥ����� ����ص� �ȴ�.

// float, double, long double �� ������ ��¿� ���Ǵ� ���Ĺ��ڴ� ���� %f, %f, %Lf �̴�.
// float, double, long double �� ������ �Է¿� ���Ǵ� ���Ĺ��ڴ� ���� %f, %lf, %Lf �̴�.

int main(void) {
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);

	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);

	return 0;
}