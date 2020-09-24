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
	// �� ��ü(const, ��const) ��� Ÿ�� ��ȯ�� �����ϰ� �ϱ� ���� const�� ����
	operator int() const { return x; } // ��const ��ü�� const, ��const�Լ� ȣ�� ���� // const ��ü�� const�Լ��� ȣ�� ����
};

int main() {
	int i = 100;
	cout << "ù��° i : " << i << endl;
	Point pt(1, 10);

	i = pt; // pt.operator int() �Ͻ��� ȣ��
	cout << "�ι�° i : " << i << endl;

	return 0;
}