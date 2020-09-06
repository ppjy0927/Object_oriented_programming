#include <iostream>
#include <string>

using namespace std;

int main() {
	string str = "Hello World!!";
	string str2 = "124541";

	cout << str << endl;
	cout << str[2] << endl; // 배열처럼 사용가능

	// 문자열의 길이
	cout << str2.size() << endl;

	// 문자열의 결합
	string strs = str + str2;
	cout << strs << endl;

	// find 함수 : 문자열에서 특정 문자열을 찾아 있을 경우 그 위치값을 리턴
	cout << str.find("World") << endl;
}