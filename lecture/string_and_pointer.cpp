#include <iostream>

/*
	���ڿ��� �����ͷ� �ٷ��

	���ڿ� �������� Ư¡
	- ���ڿ� �����Ϳ����� �����ּҸ� �����ϰ� ������ ��¿����� ��ü ���ڿ��� �������

*/

using namespace std;

int main() {
	char* str = "Hello World!!";
	cout << str << endl; // ���ڿ� ���
	cout << (int)str << endl; // str�� �ּҰ� ���

	// str(���ڿ� ������) �� ��ü�� ���ڿ��� ����ϰ�, (int) ����ȯ�� �� ��쿡�� �ּҰ��� ����Ѵ�.

	char str1[] = "apple";
	// str[] = "Orange"; // �迭 ���� �ٲ� �� ����

	str = "Orange";
	cout << str << endl; // Orange ���
	cout << *str << endl; // O ���
	cout << *(str + 1) << endl; // r ���

	char str2[] = "testString";

	for (int i = 0; str2[i] != '\0'; i++) {
		cout << str2[i] << "-";
	}
}