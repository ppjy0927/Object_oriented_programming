#include <iostream>

using namespace std;

class Point {
	int x;
	int y;

public:
	// Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	Point(); // 원형생성자
	Point(int intX, int intY); // 인자생성자

	const Point& operator--() { // 전위연산자
		--x;
		--y;
		return *this;
	}

	const Point operator--(int) { // 후위연산자
		Point pt(x, y);
		--x;
		--y;
		return pt;
	}

	void Print() const{
		cout << x << ", " << y << endl;
	}
};

Point::Point() {
	x = 0; 
	y = 0;
}

Point::Point(int intX, int intY) {
	x = intX;
	y = intY;
}

int main() {
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = --p1; // p1.operator--(); 와 같음
	p1.Print(); // 1, 2
	result.Print(); // 1, 2

	result = p2--; // p2.operator--(0); 와 같음
	p2.Print(); // 1, 2
	result.Print(); // 2, 3

	return 0;
}