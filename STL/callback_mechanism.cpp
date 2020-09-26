// ��ü�� ����Լ� ȣ��, ��ü�� �ּҷ� ��� �Լ� ȣ��
/*
	�Ϲ����� �Լ�������		void Print(int n) ---> void(*pf)(int)
	����Լ� ������		void Print::Print(int n) ---> void (Print::*pf)(int)

	����Լ��� ȣ�� ����� ���� ȣ�� ��Ŀ� ���̰� ����
	- ��ü�� ����Լ��� ȣ���ϴ� ��쿡�� .*�����ڸ� �����		ex> (��ü.*pf)(100)
	- �ּҷ� ����Լ��� ȣ���ϴ� ��쿡�� ->*�����ڸ� �����		ex> (�ּ�->*pf)(100)
*/

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
	void PrintInt(int n) {
		cout << "���� : " << n << endl;
	}
};

int main() {
	Point pt(4, 5);
	Point *p = &pt;

	void (Point::*pf1)() const; // ����Լ� ������ ����
	pf1 = &Point::Print; // Point��ü�� �ּҰ��� �����Ѿ� �ϴϱ� & ���� 

	void (Point::*pf2)(int); // ����Լ� ������ ����
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(100);
	cout << endl;

	(pt.*pf1)(); // ��ü�� ����Լ� �����͸� �̿��� ȣ�� ���
	(pt.*pf2)(100); // ��ü�� ����Լ� �����͸� �̿��� ȣ�� ���
	cout << endl;

	(p->*pf1)(); // �ּҷ� ����Լ� �����͸� �̿��� ȣ��
	(p->*pf2)(100); // �ּҷ� ����Լ� �����͸� �̿��� ȣ��

	return 0;
}

// �Ϲ����� �Լ� ȣ��
//4, 5
//���� : 100
//
// ��ü�� �̿��� ����Լ� �����͸� ����� ȣ��
//4, 5
//���� : 100
//
// �ּҷ� ����Լ� �����͸� �̿��� ȣ��
//4, 5
//���� : 100