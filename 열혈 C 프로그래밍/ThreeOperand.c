#pragma warning(disable: 4996)
#include <stdio.h>

// (if, else if, else) 문은 (if, else) 문을 중첩시킨 형태와 같음.
// 삼 항 연산자 : 피연산자가 3개인 조건 연산자
int main(void) {
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값: %d \n", abs);
	return 0;
}