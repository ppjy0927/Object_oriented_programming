#include "class_split_Point.h"
#include <iostream>

using namespace std;
// Point Ŭ������ ������ ����. 
// ������ class�̸��� �����ϰ� Point.cpp�� �̸��� ����� �ϴµ� 
// pointer ���信���� �����̸� �浹�� ���� ���� �ε����ϰ� class_split_Point.cpp�� ���� ��

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