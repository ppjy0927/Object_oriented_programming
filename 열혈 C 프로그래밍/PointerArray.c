#include <stdio.h>

// 포인터 배열
// 포인터 변수로 이뤄진, 주소 값의 저장이 가능한 배열
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 }; // 길이가 3인 int형 포인터 배열 arr

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);
	return 0;
}