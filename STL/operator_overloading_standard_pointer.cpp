// �޸� ���� ������ �����ε�, Ŭ���� ��� ���� ������ �����ε� (*, &, ->)

// �Ϲ� ������ ���

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

int main() {
	Point *p1 = new Point(2, 3);
	Point *p2 = new Point(4, 4);

	p1->Print(); // p1�� ����Լ� ȣ��
	p2->Print(); // p2�� ����Լ� ȣ��

	delete p1; // �޸𸮿��� ���� 
	delete p2;

	return 0;
}