#pragma warning(disable: 4996)
#include <stdio.h>

// double형 데이터를 출력할 때에는 서식문자 %f를 사용하지만
// double형 데이터를 입력 받을 때에는 서식문자 %lf를 사용한다.

int main(void) {
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);
	return 0;
}