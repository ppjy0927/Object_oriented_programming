#include <iostream>

/*
	�迭 : ���� ���� ������ ��� �����ϴ� �����
	�迭�� ũ�� : �� ������ ũ�� * ������ ����
*/

using namespace std;

int main() {
	int a[5] = { 10, 20, 30, 40, 50 }; // �迭�� �ʱ�ȭ
	int b[] = { 1, 2, 3 };
	int c[3];
	
	char ch;
	double d;

	c[0] = 10;
	c[1] = 100;
	c[2] = 1000;

	cout << a[2] << endl;

	for (int i = 0; i < 5; i++) {
		cout << "a�迭�� " << i << "��° ���� = " << a[i] << endl;
	}

	cout << sizeof(ch) << endl;
	cout << sizeof(d) << endl;

	cout << sizeof(char) << endl; // 1byte
	cout << sizeof(double) << endl; // 8byte
	cout << sizeof(int) << endl; // 4byte

	cout << sizeof(a) << endl; // int�� ���� 5�� ������ ������ 4 * 5 = 20byte
	cout << sizeof(c) << endl; // int�� ���� 3�� ������ ������ 4 * 3 = 12byte
	
	char cArr[3] = { 'a', 'b', 'c' };
	cout << sizeof(cArr) << "bytes" << endl;

	double dArr[5] = { 0.3, 0.5, 1.2, 1.6, 2.6 };
	cout << sizeof(dArr) << "bytes" << endl;

	// sizeof(b) / sizeof(b[0]) --> (ex) 20byte / 4byte = 5 --> �迭�� ũ�� / �� ����� ũ�� = ����� ���� 5�� 
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		b[i] *= 2;
	}
	cout << b[2] << endl;
}