#include <stdio.h>

// 함수의 선언
int NumberCompare(int num1, int num2); // 매개변수의 이름을 포함한 선언
 // NumberCompare(int, int)            // 매개변수의 이름을 생략한 표현

int main(void) {
	printf("3과 4 중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
	printf("7과 2 중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
	
	return 0;
}

int NumberCompare(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}