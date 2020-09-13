#include "class_split_Point.h"
#include <iostream>

using namespace std;
// Point 클래스의 구현부 파일. 
// 원래는 class이름과 동일하게 Point.cpp로 이름을 지어야 하는데 
// pointer 개념에서의 파일이름 충돌을 막기 위해 부득이하게 class_split_Point.cpp로 지은 것

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