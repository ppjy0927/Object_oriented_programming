#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	void Output();

	// �����ڵ�
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// ������ : Ŭ���� ����� �����ϱ� ���� �Լ�
	void SetX(int value) {
		if (value < 0) x = 0;
		else if (value > 100) x = 100;
		else x = value;
	}

	void SetY(int value) {
		if (value < 0) y = 0;
		else if (value > 100) y = 100;
		else y = value;
	}

	int GetX() { return x; }
	int GetT() { return y; }
};

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int initialX, int initialY) {
	SetX(initialX);
	SetY(initialY);
}

Point::Point(const Point& pt) {
	x = pt.x;
	y = pt.y;
}

void Point::Output() {
	cout << "(" << x << ", " << y << ")" << endl;
}

int main() {
	// ��ü�� ����
	Point po(-100, 130);
	po.Output();
}