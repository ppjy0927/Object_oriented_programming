// c++ 에서 함수는 정적 함수와 멤버 함수가 있음

/*
	정적 함수 : 전역함수, namespace 내의 전역 함수, static 함수
	멤버 함수 : 클래스 내에 있는 함수

	함수의 호출
	- 정적 함수 호출(정적 함수)
	- 객체로 멤버함수 호출(멤버 함수)
	- 객체의 주소로 멤버함수를 호출(멤버 함수)
*/

#include <iostream>

using namespace std;

// 전역 함수
void Output() {
	cout << "정적 함수 Output()" << endl;
}

class Point {
public:
	// 멤버 함수
	void Output() {
		cout << " 멤버 함수 Output() " << endl;
	}
};

int main() {
	Point pt;
	Point *p = &pt; // pt의 주소값을 나타내는 포인터
	 
	Output(); // 정적 함수 호출
	pt.Output(); // 객체로 멤버 함수를 호출
	p->Output(); // 주소로 멤버 함수를 호출

	return 0;
}