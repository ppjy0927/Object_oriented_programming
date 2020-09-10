#include <iostream>

using namespace std;

struct Aa {
	int x, y;
	long* ptr;
};

struct Foo {
	int id;
	Foo* p; // Foo 타입을 가리키는 포인터
};

int main() {
	long n = 3000;

	Aa aaa;
	
	aaa.ptr = &n;
	cout << *(aaa.ptr) << endl;

	Foo foo1, foo2, foo3;
	
	foo1.id = 1;
	foo1.p = &foo2; // foo1의 포인터는 foo2를 가리키고 있음

	foo2.id = 2;
	foo2.p = &foo3;

	foo3.id = 3;
	foo3.p = &foo1;

	cout << "foo1.id = " << foo1.id << endl;
	cout << "foo2.id = " << foo1.p->id << endl; // 구조체 멤버에 접근하기 위해서는 화살표(->) 사용
	cout << "foo3.id = " << foo1.p->p->id << endl;
	cout << "foo1.id = " << foo1.p->p->p->id << endl;
}