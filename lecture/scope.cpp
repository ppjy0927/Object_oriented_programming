#include <iostream>

using namespace std;

// scope(����)
// ��������(local scope �Ǵ� block scope)

// static ������(���� ������ ���� �ϳ�)
// ���� �տ� ���̸� �ش� ������ ���������� ��

int a = 0;
int b = 100;

void func() {
	int a = 0;
	int b = 10;
}

int main() {
	int a = 0;

	int c = 0;
	++c;
	{ // block ���� ������ block �ۿ��� ����� �� ����
		int x = 1;
		x = 45;
		int c = 0;
	}
	{
		int x = 100;
	}

	// int c = 100; // ������ ����
	cout << c << endl; // block ���� --> 1 ���

	a++; // main�� a

	::a = 10; // �ߺ��� ������ �ִ� ���, '::'�� �̿��� ���� ���� a ǥ��

	return 0;
}