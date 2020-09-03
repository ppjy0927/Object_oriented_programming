#include <iostream>

/*
	���۷���(reference) : ���� ������ �ʱ�ȭ�� �ĺ���, �����Ϳ� ����� ����� ��.

	����;
	Ÿ��& ���۷����� = ����;

	int a;
	int& rA = a; // rA�� ���۷����� : int& rA == int &rA

*/

using namespace std;

void swap(int& x, int& y) {
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 10;
	int b = 200;

	cout << "���� a ���� " << a << " �Դϴ�." << endl;
	cout << "���� b ���� " << b << " �Դϴ�." << endl;
	cout << "�� ���� a�� b�� ��ȯ�غ��ڽ��ϴ�." << endl;
	
	swap(a, b);
	cout << "���� a ���� " << a << " �Դϴ�." << endl;
	cout << "���� b ���� " << b << " �Դϴ�." << endl;


	/*
	int& rA = a;

	cout << "���� a�� ���� " << a << " �Դϴ�." << endl;
	cout << "���۷��� rA�� ���� " << rA << " �Դϴ�." << endl;

	rA = 100;

	cout << "rA�� ���� " << rA << " �Դϴ�." << endl;
	cout << "���� a�� ���� " << a << " �Դϴ�." << endl;
	*/
}