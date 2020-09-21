// �迭 �ε��� ������ �����ε� ([]������ �����ε�)

// �迭�� ����ϴ� []�����ڸ� ��ü�� ����ϴ� �����ε�

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

	int operator[](int idx) const {
		if (idx == 0)
			return x;
		else if (idx == 1)
			return y;
		else
			throw "����!!";
	}
};

int main() {
	Point pt(3, 4);
	pt.Print(); // 3, 4
	cout << pt.operator[](0) << ", " << pt.operator[](1) << endl; // 3, 4
	cout << pt[0] << ", " << pt[1] << endl; // 3, 4

	return 0;
}