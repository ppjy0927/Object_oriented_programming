#include <iostream>

using namespace std;

int* func() {
	int a = 100;
	int* pa = &a;

	cout << pa << endl;
	cout << "*pa���� " << *pa << " �Դϴ�." <<  endl;
	return pa;
}

int main() {
	int* rpa = func(); // a�� �ּҰ��̾��� �ּҰ��� ��������� ���� ���� ������ ����.
	// �Լ��� ����Ǹ鼭 a�� �޸𸮰� �Ҵ������Ǿ� ���� �������� ����(a�� ���� �����̱� ����)

	cout << rpa << endl;
	cout << "���� �� *pa�� " << *rpa << " �Դϴ�." << endl;
}