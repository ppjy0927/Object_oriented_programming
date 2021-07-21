#pragma warning(disable: 4996)
#include <stdio.h>

// 반복영역이 무조건 한 번 이상 실행되어야 함을 강조하고자 할 때
// do~while문을 쓰는 것이 더 자연스러움
int main(void) {
	int total = 0, num = 0;
	do {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);
	return 0;
}