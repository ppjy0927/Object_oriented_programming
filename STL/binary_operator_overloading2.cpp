#include <iostream>

using namespace std;

// !=
class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

	void Print() const
	{
		cout << x << ", " << y << endl;
	}

	bool operator==(const Point& arg) const {
		return x == arg.x && y == arg.y ? true : false;
	}

	bool operator!=(const Point& arg) const {
		return !(*this == arg);
	}
};

int main() {
	Point p1(1, 2), p2(2, 2), p3(1, 2);

	if (p1 != p2) // p1.operator != p2와 같은 조건
		cout << "p1 != p2" << endl;
	if (p1 != p3)
		cout << "p1 != p3" << endl;

	return 0;
}