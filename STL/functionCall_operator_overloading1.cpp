// STL 프로그래밍에 있어서 필요한 연산자 오버로딩

/*
	- 함수 호출연산자 오버로딩 : ()연산자
	
	객체를 함수처럼 동작하게 하는 연산자

	예>
		Print(100)을 해석할 수 있는 3가지 경우
		1. Print가 함수 이름인 경우에는 함수 호출
		2. Print가 함수 포인터인 경우에는 함수 포인터
		3. Print가 객체인 경우에는 함수 객체
*/

#include <iostream>

using namespace std;

struct FObject {
public:
	void operator() (int arg) const {
		cout << "숫자 출력 : " << arg << endl;
	}
};

void Print1(int arg) {
	cout << "숫자 출력 : " << arg << endl;
}

int main() {
	void(*Print2)(int) = Print1; // Print1이라는 함수를 Print2라는 함수포인터로 선언
	FObject Print3;

	Print1(100); // 함수를 이용한 출력
	Print2(100); // 함수 포인터를 이용한 출력
	Print3(100); // 함수 객체를 이용한 출력(Print3.operator(100);과 같음)
}