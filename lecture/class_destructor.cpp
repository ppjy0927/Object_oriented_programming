#include <iostream>

using namespace std;

class Demo {
public:
	Demo() { // 생성자
		cout << "생성자가 호출되었습니다!!" << endl;
	}
	~Demo() { // 소멸자
		cout << "소멸자가 호출되었습니다!!" << endl;
	}
};

Demo globalDemo; // 전역객체

void test() {
	cout << "------- test 함수의 { 다음입니다." << endl;
	Demo demoObj; // 로컬객체
	cout << "------- test 함수의 } 전입니다." << endl;
}

int main() {
	cout << "프로그램(main)의 { 다음입니다." << endl;
	globalDemo;
	test();
	cout << "프로그램(main)의 } 전입니다." << endl;
}

// 출력
// 생성자가 호출되었습니다!!           --> 전역객체
// 프로그램(main)의 { 다음입니다.
// ------- test 함수의 { 다음입니다.
// 생성자가 호출되었습니다!!           --> 로컬객체
// ------- test 함수의 } 전입니다.
// 소멸자가 호출되었습니다!!           --> 로컬객체
// 프로그램(main)의 } 전입니다.
// 소멸자가 호출되었습니다!!           --> 전역객체