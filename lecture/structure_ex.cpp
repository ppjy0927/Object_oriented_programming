#include <iostream>

using namespace std;

struct Car {
	int number;
	float gas;
};

void show(Car c) {
	cout << "������ ��ȣ�� " << c.number << ", ������ ���� " << c.gas << endl;
} // ����ü�� �Լ��� �μ��� �Ѱ��༭ ����� �� ����

int main() {
	Car car1 = { 0, 0.0 };

	cout << "������ ��ȣ�� �Է��Ͻÿ�." << endl;
	cin >> car1.number;

	cout << "���ᷮ�� �Է��Ͻÿ�." << endl;
	cin >> car1.gas;

	show(car1);
}
