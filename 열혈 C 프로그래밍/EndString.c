#include <stdio.h>

// 널 문자의 아스키 코드 값은 0
// 공백 문자(' ')의 아스키 코드 값은 32
// 문자열의 끝을 널 문자로 판단
int main(void) {
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = '\0'; // 9번째 요소에 널 문자 저장
	printf("string: %s \n", str);

	str[6] = 0; // 7번째 요소에 널 문자 저장, 널 문자를 저장하는 또다른 방식
	printf("string: %s \n", str);

	return 0;
}