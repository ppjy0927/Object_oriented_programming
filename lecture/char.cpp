#include <iostream>

using namespace std;

/*
	char Ÿ�� : �� ����Ʈ�� �����ڸ� ǥ���Ѵ�.
*/

int main() {
	char en[] = "Hello world";

	cout << "char" << en << endl;
	
	//
	cin >> en;
	for (int i = 0; en[i]; i++) {
		cout << (char)en[i];
	}
	cout << endl;
	cout << "�迭�� ũ��� " << sizeof(en) << "�Դϴ�." << endl;
	//

	char wc[] = "�ѱ��� ó��";
	cout << wc << endl;
	cout << sizeof(wc) << endl; // 12 ���(�ѱ��� �� ���� �� 2byte, ���� 1byte, null 1byte)
	cout << strlen(wc) << endl; // 11 ���(�ѱ��� �� ���� �� 2byte, ���� 1byte)

	int i = 0;
	while (wc[i]) {
		cout << (char)wc[i];
		i++;
	}
	cout << endl;
}