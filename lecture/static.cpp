#include <iostream>

using namespace std;

void func();

int a = 0;

int main() {
	for (int i = 0; i < 5; i++) {
		func();
	}
}

void func() {
	int b = 0;
	static int c = 0;
	cout << "���� a�� " << a << ", ���� b�� " << b << ", ���� c�� " << c << "�Դϴ�." << endl;
	a++; // 0, 1, 2, 3, 4
	b++; // 0, 0, 0, 0, 0 --> �Լ� ȣ���� ������ �����
	c++; // 0, 1, 2, 3, 4
}