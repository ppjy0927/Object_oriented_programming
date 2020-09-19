#include <iostream>

/*
	const 멤버 함수와 비const 멤버 함수
	const 멤버 함수 : 멤버 함수 내에서 객체의 멤버 변수를 변경하지 않는다는 것을 보장하는 함수
	따라서 const 객체는 const 멤버 함수만 호출할 수 있음
	const 멤버 함수에서 멤버 변수를 변경할 경우에는 컴파일 에러 발생
*/

using namespace std;

class Point2 {
	int x;
	int y;
public:
	Point2(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	int GetX() const { return x; } // const 함수
	int GetY() const { return y; }
	void SetX(int _x) { x = _x; } // 비const 함수 : x멤버를 변경하겠다는 의미
	void SetY(int _y) { y = _y; } // 비const 함수 : y멤버를 변경하겠다는 의미
	void Print() const // const 함수
	{
		cout << x << ", " << y << endl;
	}
};

int main() {
	const Point2 p1(0, 0); // const 객체 : 모든 멤버 변경 불가능 -> const 멤버 함수만 호출 가능
	Point2 p2(2, 3); // 비const 객체

	p1.Print(); // 0, 0
	p2.Print(); // 2, 3

	cout << "p1 : " << p1.GetX() << ", " << p1.GetY() << endl; // p1 : 0, 0
	cout << "p2 : " << p2.GetX() << ", " << p2.GetY() << endl; // p2 : 2, 3

	// p1.SetX(3); 에러 발생! const 객체는 const 멤버 함수만 호출 가능
	// p1.SetY(10); 에러 발생! const 객체는 const 멤버 함수만 호출 가능

	p2.SetX(3); // 에러 없음
	p2.SetY(10); // 에러 없음

	return 0;
}