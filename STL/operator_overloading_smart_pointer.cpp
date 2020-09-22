// 스마트 포인터 사용

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
};

class PointPtr {
	Point *ptr;
public:
	// 생성자
	PointPtr(Point *p) :ptr(p) {}

	// 소멸자
	~PointPtr() {
		delete ptr;
	}

	// 연산자 오버로딩 : 없으면 p1->Print() 에러 <- p1은 PointPtr의 객체이므로 Print()를 가지고 있지 않음.
	Point* operator->() const {
		return ptr;
	}
};

int main() {
	PointPtr p1 = new Point(2, 3); // 메모리 할당
	PointPtr p2 = new Point(4, 4); // 메모리 할당

	p1->Print(); // p1.operator->()->Print()
	p2->Print(); // p2.operator->()->Print()

	return 0;
}