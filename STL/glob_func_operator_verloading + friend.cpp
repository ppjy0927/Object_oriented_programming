/*
	���� �Լ��� �̿��� ������ �����ε�

	������ �����ε��� ũ�� �� ������ ����

	- ��� �Լ� ������ �����ε�
	class Point {...};
	
	int main() {
		Point pt1(1, 2), pt2(3, 3);
		pt1 + pt2; // pt1.operator+(pt2)
		return 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////
	- ���� �Լ� ������ �����ε�
	class Point {...};
	
	class Point operator+(argL, argR);

	int main() {
		Point pt1(1, 2);

		operator(k, pt1);
		//k + pt1; // k�� ������ �����ε� ��ü�� �ƴϹǷ� k.operator+(pt1)ó�� ȣ���� �� ��
			  	   // ���� operator+(k, pt1)ó�� ȣ���ؾ� ��
		return 0;
	}

*/
// �Ϲ������� ���� ����ϴ� ������ �����ε��� ����Լ� ������ �����ε�

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
	
	int GetX() const { return x; }
	int GetY() const { return y; }

	//const Point operator- (const Point& arg) const {
	//	return Point(x - arg.x, y - arg.y); // this.x �����Ǿ x��� ���̴� ��
	//} // ��� �Լ��� �̿��� ������ �����ε�

	friend const Point operator-(const Point& argL, const Point& argR);
};

const Point operator-(const Point& argL, const Point& argR) {
	return Point(argL.x - argR.x, argL.y - argR.y);
}

//// ���� �Լ��� �̿��� ������ �����ε�
//// x, y�� private�ؼ� ���� �Ұ����ϹǷ� Ŭ���� �ȿ� GetX, GetY ������� --> friend Ű���带 �̿��ϸ� �� ���� ��
//const Point operator-(const Point& argL, const Point& argR) {
//	return Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
//}

int main() {
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 - p2; // operator-(p1, p2)�� ȣ��
	p3.Print();

	return 0;
}

// ���� ���� �Լ����� getter, setter�� ������� �ʰ� x, y�� �����ϱ� ���� ������� friend Ű���带 ��� ����

/*
	������(friend)���� �Լ� ������� Ŭ���� ������ �� ������ ����
	�Լ��� Ŭ������ ������� �����ϸ� ��� Ŭ�������(public, private, protected)�� ���� ���� ���� ��� ����
	////////////////////////////////////////////////////////////////////////////////////////////
	�Լ� ������ ��>
	class A{
		...
		friend void Func(); 
	};
	void Func() { �� �Լ� ������ class A�� ��� ����� ���� ���� ���� ��� ���� }
	////////////////////////////////////////////////////////////////////////////////////////////
	Ŭ���� ������ ��>
	class A{
		...
		friend class B;
	};
	class B { �� Ŭ���� ������ class A�� ��� ����� ���� ���� ���� ��� ����}
*/