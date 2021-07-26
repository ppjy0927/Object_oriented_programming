#include <stdio.h>

// 지역 변수는 스택(stack)이라는 메모리 영역에 할당됨.

// 매개 변수도 지역 변수의 일종.
// 선언된 함수 내에서만 접근이 가능
// 선언된 함수가 반환을 하면 지역변수와 마찬가지로 소멸이 됨..

// 해당 문장을 주석처리하지 않았을 때
// if문 내에서는 main함수의 num이 가려짐.
int main(void) {
	int num = 1;

	if (num == 1) {
		int num = 7; // 주석처리 유무
		num += 10;
		printf("if문 내 지역변수 num: %d \n", num);
	}
	printf("main 함수 내 지역변수 num: %d \n", num);
	return 0;
}