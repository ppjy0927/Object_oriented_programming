#include <stdio.h>

// main 밖의 정적 변수는 초기화 안 해도 0으로 초기화됨.
// main 안의 변수는 초기화하지 않으면 쓰레기 값이 들어감 -> 에러

int main(void) {
	int a = 7;
	printf("The number is %d.\n", a);
	system("pause");
	return 0;
}