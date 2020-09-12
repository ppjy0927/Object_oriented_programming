#include <iostream>
#include <string>

/*
	������(constructor) : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
	�ؾ�� ���빰(��, ��ũ�� ��)�� �ٲ��ִ� ��ó�� �ʱ�ȭ���ִ� �Լ�

	�����ڸ� �� �ϳ��� �������� �ʾҴٸ� �����Ϸ��� �ڵ����� �ֺ� �����ڸ� ȣ����.
	�� >
		Car() {
		} // �����Ϸ��� ������ ���� �����ڸ� �ڵ����� ȣ����
*/

using namespace std;

class Car {
	int carNumber;
	string color;
public:
	// ��ü�� �ʱ�ȭ �۾��� �ϴ� ������
	Car() {
		carNumber = 0;
		color = "yellow";
		cout << "�ڵ����� ����������ϴ�." << endl;
	}

	Car(int num, string col) {
		carNumber = num;
		color = col;
		cout << "���� ��ȣ�� " << carNumber << ", ���� ������ " << col << "�� �ڵ����� ����������ϴ�." << endl;
	}

	// Car() {} // �����ڸ� �������� �ʾ��� ��� �����Ϸ������� �⺻������ �̿� ���� �����ڰ� ȣ��� 

	void show() {
		cout << "���� ��ȣ�� " << carNumber << "�Դϴ�." << endl;
		cout << "���� ������ " << color << "�Դϴ�." << endl;
	}
};

int main() {
	Car car1; // �μ��� ���� �����ڸ� ȣ���ؼ� ������� ��ü
	Car car2(1111, "Blue"); // �μ��� 2���� �޴� �����ڸ� ȣ���ؼ� ������� ��ü

	car1.show();
}