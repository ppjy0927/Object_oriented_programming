#pragma warning(disable: 4996)
#include <stdio.h>

// 실수의 입력과정에서 e 표기법을 사용해도 된다.

// float, double, long double 의 데이터 출력에 사용되는 서식문자는 각각 %f, %f, %Lf 이다.
// float, double, long double 의 데이터 입력에 사용되는 서식문자는 각각 %f, %lf, %Lf 이다.

int main(void) {
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num2);

	printf("실수 입력3(e 표기법으로): ");
	scanf("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num3);

	return 0;
}