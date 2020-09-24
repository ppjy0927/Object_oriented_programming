#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int intX, int intY) {
		x = intX;
		y = intY;
	}
	void Print() const {
		cout << x << ", " << y << endl;
	}
	// 두 객체(const, 비const) 모두 타입 변환이 가능하게 하기 위해 const를 붙임
	operator int() const { return x; } // 비const 객체는 const, 비const함수 호출 가능 // const 객체는 const함수만 호출 가능
};

int main() {
	int i = 100;
	cout << "첫번째 i : " << i << endl;
	Point pt(1, 10);

	i = pt; // pt.operator int() 암시적 호출
	cout << "두번째 i : " << i << endl;

	return 0;
}