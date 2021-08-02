#include <stdio.h>

// int 형 배열 요소간 주소 값의 차는 4바이트
// 배열의 이름 == 배열의 시작 주소 값 (값의 저장이 불가능한 상수 형태)
int main(void) {
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름: %p \n", arr);
	printf("첫 번째 요소: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	// arr = &arr[i]; // 이 문장은 컴파일 에러를 일으킴.

	return 0;
}