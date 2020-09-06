#include <iostream>

/*
	문자열을 포인터로 다루기

	문자열 포인터의 특징
	- 문자열 포인터에서는 시작주소를 저장하고 있지만 출력에서는 전체 문자열을 출력해줌

*/

using namespace std;

int main() {
	char* str = "Hello World!!";
	cout << str << endl; // 문자열 출력
	cout << (int)str << endl; // str의 주소값 출력

	// str(문자열 포인터) 그 자체는 문자열을 출력하고, (int) 형변환을 할 경우에는 주소값을 출력한다.

	char str1[] = "apple";
	// str[] = "Orange"; // 배열 값을 바꿀 수 없음

	str = "Orange";
	cout << str << endl; // Orange 출력
	cout << *str << endl; // O 출력
	cout << *(str + 1) << endl; // r 출력

	char str2[] = "testString";

	for (int i = 0; str2[i] != '\0'; i++) {
		cout << str2[i] << "-";
	}
}