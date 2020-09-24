#include <iostream>

using namespace std;

class A {

};

class B {
public:
	operator A(){
		cout << "operator A() ȣ��" << endl;
		return A();
	}

	operator int() {
		cout << " operator int() ȣ��" << endl;
		return 100;
	}

	operator double() {
		cout << "operator double() ȣ��" << endl;
		return 4.4;
	}
};

int main() {
	A a;
	int i;
	double d;
	B b;

	// ���� �Ͻ��� ȣ��, ����� ȣ�� ��� operator overloading�� ������ ������ ��
	a = b; // b.operator A() �� ���� --> �Ͻ��� ȣ��
	i = b; // b.operator int() �Ͻ��� ȣ��
	d = b; // b.operator double() �Ͻ��� ȣ��

	cout << endl;

	a = b.operator A(); // ����� ȣ��
	i = b.operator int();
	d = b.operator double();

	return 0;
}