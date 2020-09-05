#include <iostream>

/*
	문자열과 배열
	"Hello"란 문자열은 연속된 문자 즉, 'H' 'e' 'l' 'l' 'o' 각각의 문자로 이루어진 배열임
	char형 배열로 다루는 것과 같음
	
	char str[6];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0'; // 문자열의 마지막에는 \0(NULL)값이 들어감

	초기화 방법 : 위의 방법은 불편하기 때문에 잘 사용하지 않음

	// 모두 같은 표현
	char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'}
	char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}
	char str[6] = "Hello";
	char str[] = "Hello";

*/

using namespace std;

int main() {
	char str[] = "Hello!! World!!";
	cout << str << endl;
}