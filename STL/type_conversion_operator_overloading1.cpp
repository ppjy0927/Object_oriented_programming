// 타입 변환 연산자 오버로딩

/*
	사용자가 직접 정의해서 타입 변환할 수 있는 방법
	- 생성자를 이용해서 타입변환
	- 타입변환 연산자 오버로딩을 이용한 타입변환
*/

#include <iostream>

using namespace std;

class A {

};

class B {
public:
	B() {
		cout << "B 원형 생성자" << endl;
	}
	B(A& _a) {
		cout << "B(A_a) 생성자" << endl;
	}
	B(int i) {
		cout << "B(int i) 생성자" << endl;
	}
	B(double d) {
		cout << "B(double d) 생성자" << endl;
	}
};

int main(){
	A a;
	int i = 100;
	double d = 5.4;

	B b;
	// A타입의 객체를 B타입으로 변환
	b = a; // b = B(a) 암시적 생성자 호출 후에 대입
	// 정수형 타입을 B타입으로 변환
	b = i; // b = B(i) 암시적 생성자 호출 후에 대입
	// double형 타입을 B타입으로 변환
	b = d; // b = B(d) 암시적 생성자 호출 후에 대입

	return 0;
}