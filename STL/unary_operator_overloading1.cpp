#include <iostream>

/*
	���� ������ �����ε�
	���� ������ : !, &, ~, *, +, -, ++, --
	
	++, -- �� ���õ� �����Ϸ��� ��ӵ� �Լ� operator++(), operator++(int)
*/

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ", " << y << endl; }

	const Point& operator++() { // ���� ++
		++x;
		++y;
		return *this;
	}

	const Point operator++(int) { // ���� ++
		Point pt(x, y);
		++x;
		++y;
		return pt;
	}
};

int main() {
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = ++p1; // p1.operator++()�� ȣ���� �Ͱ� ����
	p1.Print(); // 3, 4
	result.Print(); // 3, 4

	result = p2++; // p2.operator++(0)�� ȣ���� �Ͱ� ����
	p2.Print(); // 3, 4
	result.Print(); // 2, 3 --> ���� ���� �����

	return 0;
}