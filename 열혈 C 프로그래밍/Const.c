#include <stdio.h>

// const가 맨 앞부분에 선언될 때 : 값 변경 불가(*ptr = xx 불가 / num = xx 가능)
////// ptr이 가리키는 대상에 저장된 값을 변경하는 연산 허용X
////// ptr이 가리키는 변수 num이 상수화되는 것은 아니기 때문에 변수 num에 저장된 값을 변경하는 것은 허용

// const가 변수의 이름 앞에 올 때 : 변수 변경 불가(ptr = &xx 불가 / *ptr = xx 가능)
////// 한 번 가리키기 시작한 변수를 끝까지 가리켜야 한다는 뜻
////// ptr이 가리키는 대상에 저장된 값을 변경하는 연산 허용

// const int* const ptr = &num일 때
////// 1번째 const로 인해 *ptr = 20; 컴파일 에러
////// 2번째 const로 인해 ptr = &age; 컴파일 에러

int main(void) {
	int num = 20;
	const int* ptr1 = &num;
	// *ptr1 = 30; //컴파일 실패!
	num = 40; // 컴파일 성공!
	
	int num1 = 20;
	int num2 = 30;
	int* const ptr2 = &num1;
	// ptr2 = &num2; // 컴파일 실패!
	*ptr2 = 40; // 컴파일 성공!

	return 0;
}