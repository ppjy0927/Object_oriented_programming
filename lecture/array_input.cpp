#include <iostream>

using namespace std;

int main() {
	const int num = 5;

	int test[num];

	cout << num << "���� ������ �Է��ϼ���!!" << endl;
	
	for (int i = 0; i < num; i++) {
		cin >> test[i];
	}

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ����� ������ " << test[i] << "�Դϴ�." << endl;
	}
}