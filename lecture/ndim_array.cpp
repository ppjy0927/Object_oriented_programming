#include <iostream>

using namespace std;

int main() {
	const int subject = 2;
	const int num = 5;

	int test[subject][num] = { {80, 90, 100, 70, 60}, {90, 90, 88, 87, 78} }; // ������ �迭 �ʱ�ȭ�� �� �߰�ȣ�� ���� �� �� ����

	/*test[0][0] = 80;
	test[0][1] = 90;
	test[0][2] = 100;
	test[0][3] = 70;
	test[0][4] = 60;
	test[1][0] = 90;
	test[1][1] = 90;
	test[1][2] = 88;
	test[1][3] = 87;
	test[1][4] = 78;*/

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ����� ���� ������ " << test[0][i] << "�Դϴ�." << endl;
		cout << i + 1 << "��° ����� ���� ������ " << test[1][i] << "�Դϴ�." << endl;

	}
}