#include <iostream>

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const {
		cout << x << ", " << y << endl;
	}
};

class PointPtr {
	Point *ptr;
public:
	PointPtr(Point *p) :ptr(p) {}
	~PointPtr() { delete ptr; }
	Point* operator->() const { return ptr; } // �����͸� �Ѱ���
	Point& operator*() const { return *ptr; } // �ּҰ��� �Ѱ���
};

int main() {
	Point* p1 = new Point(1, 2); // �Ϲ� ������ // p1�� ����Ʈ �ν��Ͻ�
	PointPtr p2 = new Point(3, 3); // ����Ʈ ������


	// Ŭ���� ����� �����ϴ� �����ڸ� �����ε��� ��
	p1->Print();
	p2->Print(); // p2.operator->()->Print()�� ���� // ����Ʈ �������ε� ���� �� �ߴ� ���� : (->)�����ε� ����� ����
	cout << endl;


	// �޸� ���� �����ڸ� �����ε��� ��
	(*p1).Print();
	(*p2).Print(); // p2.operator*().Print()�� ����
	// ����Ʈ �������ε� ���� �� �ߴ� ���� : (*)�����ε� ����� ���� // p2�� �ּҰ��� �� ���� ���� -> �����ε� �� ���ָ� ����

	delete p1; // �Ϲ� �����ʹ� �������� �޸𸮿��� ���ŵ��� �ʱ� ������ �������� �����ؾ� ��
	//delete p2; // p2�� ����Ʈ �������̱� ������ �������� ���Ű� �ǹǷ� delete�� �ʿ䰡 ����
}