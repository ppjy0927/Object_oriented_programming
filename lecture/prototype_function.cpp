#include <iostream>

using namespace std;

// �Լ� ������Ÿ�� ���� : ��ü ���� �Լ��� ������ �����Ϸ����� �˷��ִ� ��
int max(int x, int y);

void buy(int a = 200);

int main() {
	/*int num1, num2, res;
	
	cout << "ù ��° ������ �Է��ϼ���." << endl;
	cin >> num1;
	cout << "�� ��° ������ �Է��ϼ���." << endl;
	cin >> num2;

	res = max(num1, num2);

	cout << "�ִ밪�� " << res << "�Դϴ�." << endl;*/

	cout << "ó�� ���Ű��� 100���� �Դϴ�." << endl;
	buy(100);
	cout << "�� ��° ���Ű��� �⺻���Դϴ�." << endl;
	buy();
}

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}

void buy(int a) {
	cout << a << "���� ������ �����߽��ϴ�." << endl;
}