#include <iostream>

using namespace std;

// �����͸� �Լ��� �μ��� ����ϴ� ����� ��
void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}

int main() {
	int a = 10;
	int b = 100;

	cout << "���� a�� ���� " << a << " �Դϴ�." << endl;
	cout << "���� b�� ���� " << b << " �Դϴ�." << endl;
	cout << "���� a�� b�� ���� ��ȯ�մϴ�." << endl;

	swap(a, b);

	cout << "���� a�� ���� " << a << " �Դϴ�." << endl;
	cout << "���� b�� ���� " << b << " �Դϴ�." << endl;

	/*
	int *pa;

	pa = &a;

	cout << pa << endl;
	cout << *pa << endl;

	pa = &b;

	cout << pa << endl;
	cout << *pa << endl;

	// �����͸� �̿��� ���� b�� ���� 100���� 50���� �ٲٱ�
	*pa = 50;

	cout << *pa << endl;
	cout << b << endl;
	*/
}