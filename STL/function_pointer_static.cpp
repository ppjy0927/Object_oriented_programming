// 정적 함수 포인터

#include <iostream>

using namespace std;

// 전역함수
void Output(int n) {
	cout << "전역함수 : " << n << endl;
}

// namespace 내의 전역 함수
namespace AA {
	void Output(int n) {
		cout << "namespace AA의 전역함수 : " << n << endl;
	}
}

class Point {
public:
	// static 멤버함수
	static void Output(int n) {
		cout << "Point 클래스 내의 정적 멤버 함수 : " << n << endl;
	}
};

int main() {
	void(*pf)(int); // 정적 함수의 포인터 선언 --> 함수의 시작주소값을 가르킴
	
	Output(100); // namespace가 없는 전역함수 호출
	AA::Output(100); // namespace AA의 전역함수 호출
	Point::Output(100); // Point 클래스의 정적 멤버함수 호출

	pf = Output; // Output(함수이름)은 함수의 시작주소를 의미함 == pf는 시작주소를 갖고 있는 변수
	pf(200); // 함수 포인터로 namespace가 없는 전역함수를 호출

	pf = AA::Output;
	pf(200); // 함수 포인터로 namespace AA의 전역함수를 호출

	pf = Point::Output;
	pf(200); // 함수 포인터로 Point클래스의 정적 멤버함수를 호출

	return 0;
}

//전역함수: 100
//namespace AA의 전역함수 : 100
//Point 클래스 내의 정적 멤버 함수 : 100
//전역함수 : 200
//namespace AA의 전역함수 : 200
//Point 클래스 내의 정적 멤버 함수 : 200