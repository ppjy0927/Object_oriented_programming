#pragma once
#ifndef CLASS_SPLIT_POINT_H
#define CLASS_SPLIT_POINT_H

// Point 클래스의 선언부 파일. 
// 원래는 class이름과 동일하게 Point.h로 이름을 지어야 하는데 
// pointer 개념에서의 파일이름 충돌을 막기 위해 부득이하게 class_split_Point.h로 지은 것

class Point {
	int x, y;
public:
	void Output();

	// 생성자들
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	// 접근자 : 클래스 멤버에 접근하기 위한 함수
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

#endif