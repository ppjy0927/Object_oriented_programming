#pragma once
#ifndef CLASS_SPLIT_POINT_H
#define CLASS_SPLIT_POINT_H

// Point Ŭ������ ����� ����. 
// ������ class�̸��� �����ϰ� Point.h�� �̸��� ����� �ϴµ� 
// pointer ���信���� �����̸� �浹�� ���� ���� �ε����ϰ� class_split_Point.h�� ���� ��

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

#endif