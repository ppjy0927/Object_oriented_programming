// 함수 포인터의 사용 예

#include <iostream>

using namespace std;

void Output(int n) {
	cout << "정수 : " << n << endl;
}

int main() {
	// void Output(int n) 의 함수포인터 선언
	void(*pf)(int);
	// 함수의 이름은 함수의 시작주소와 같음
	pf = Output;

	Output(200); // 함수를 호출
	pf(100); // 포인터를 이용한 함수 호출 // 함수 포인터를 이용해 함수가 가리키는 곳에 값을 대입 
	(*pf)(10); // 포인터를 이용한 함수 호출

	cout << endl;

	cout << Output << endl;
	cout << pf << endl;
	cout << *pf << endl; // *는 메모리 접근 연산자
	// 함수 포인터에서는 *pf와 pf는 같은 의미임! --> output함수의 주소
}

//정수 : 200
//정수 : 100
//정수 : 10
//
//002B1096
//002B1096
//002B1096