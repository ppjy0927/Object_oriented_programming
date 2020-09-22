// ����Ʈ ������ ���

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
	// ������
	PointPtr(Point *p) :ptr(p) {}

	// �Ҹ���
	~PointPtr() {
		delete ptr;
	}

	// ������ �����ε� : ������ p1->Print() ���� <- p1�� PointPtr�� ��ü�̹Ƿ� Print()�� ������ ���� ����.
	Point* operator->() const {
		return ptr;
	}
};

int main() {
	PointPtr p1 = new Point(2, 3); // �޸� �Ҵ�
	PointPtr p2 = new Point(4, 4); // �޸� �Ҵ�

	p1->Print(); // p1.operator->()->Print()
	p2->Print(); // p2.operator->()->Print()

	return 0;
}