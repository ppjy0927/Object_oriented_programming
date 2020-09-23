#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	// explicit Ű���带 ����ϴ� ���, �����ڸ� �̿��� ����ȯ�� �ǵ����� ���� ��� �����.
	// ��, �Ͻ��� ������ ȣ���� ���� �ʰڴ�. (����� ������ ȣ�⸸ �����ϵ��� �ϰڴ�)
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const {
		cout << x << ", " << y << endl;
	}
};

int main() {
	Point pt;
	pt.Print(); // 0, 0

	//pt = 10; // pt = Point(10, 0) �Ͻ��� ������ ȣ�� �Ŀ� ���� // explicit ��� �� ����
	pt = Point(10); // ����� ������ ȣ��(explicit�� ����߱� ����)
 	pt.Print(); // 10, 0

	return 0;
}