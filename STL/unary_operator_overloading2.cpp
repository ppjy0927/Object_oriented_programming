#include <iostream>

using namespace std;

class Point {
	int x;
	int y;

public:
	// Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	Point(); // ����������
	Point(int intX, int intY); // ���ڻ�����

	const Point& operator--() { // ����������
		--x;
		--y;
		return *this;
	}

	const Point operator--(int) { // ����������
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

	result = --p1; // p1.operator--(); �� ����
	p1.Print(); // 1, 2
	result.Print(); // 1, 2

	result = p2--; // p2.operator--(0); �� ����
	p2.Print(); // 1, 2
	result.Print(); // 2, 3

	return 0;
}