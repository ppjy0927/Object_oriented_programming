#include <iostream>

using namespace std;

struct Aa {
	int x, y;
	long* ptr;
};

struct Foo {
	int id;
	Foo* p; // Foo Ÿ���� ����Ű�� ������
};

int main() {
	long n = 3000;

	Aa aaa;
	
	aaa.ptr = &n;
	cout << *(aaa.ptr) << endl;

	Foo foo1, foo2, foo3;
	
	foo1.id = 1;
	foo1.p = &foo2; // foo1�� �����ʹ� foo2�� ����Ű�� ����

	foo2.id = 2;
	foo2.p = &foo3;

	foo3.id = 3;
	foo3.p = &foo1;

	cout << "foo1.id = " << foo1.id << endl;
	cout << "foo2.id = " << foo1.p->id << endl; // ����ü ����� �����ϱ� ���ؼ��� ȭ��ǥ(->) ���
	cout << "foo3.id = " << foo1.p->p->id << endl;
	cout << "foo1.id = " << foo1.p->p->p->id << endl;
}