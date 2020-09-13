#include <iostream>
#include <string>

/*
	�������(����, �Լ�) : ��� ��ü�� �����ϴ� ���

	static ��� �Լ��� ��ü�� �������� ���� ���¿����� ȣ��Ǿ�� �ϱ� ������ Ư�� ��ü�� ����Ǿ� �ִ� �Ϲ� ������� ������ �� ����
	--> static ��� �Լ����� static ������!
*/

using namespace std;

class Car {
	int carNumber;
	string color;
public:
	static int sum; // �̹� ���α׷��� ���۵� �� �޸� �󿡼� sum�̶�� ������ ��������� ��, ��� ��ü�� �����ϴ� ���
	Car();
	void setCar(int number, string col);
	void showCarInfo(); // ��ü�� ���� �ִ� �Լ�(�л��� å��, ����)
	static void showSum(); // ��� ��ü�� �����ϴ� ���(�л����� �����ϴ� ���Թ�, û�ҵ���), ���� �� �ƴ϶� �Լ����� static�� �� �� ����
};

Car::Car() {
	carNumber = 0;
	color = "black";
	sum++; // sum�� static�̴ϱ� ��ü �ȿ� ���ԵǾ� �ִ� ���� �ƴϱ� ������ ++�� ������ ��
	cout << "�ڵ����� ����������ϴ�." << endl;
}

void Car::setCar(int number, string col) {
	carNumber = number;
	color = col;
	cout << "���� ��ȣ�� " << carNumber << "(��)��, ���� ������ " << color << "(��)�� �ٲپ����ϴ�." << endl;
}

void Car::showSum() {
	cout << "�ڵ����� ��� " << sum << "�� �ֽ��ϴ�." << endl;
}

void Car::showCarInfo() {
	cout << "���� ��ȣ�� " << carNumber << "�Դϴ�." << endl;
	cout << "���� ������ " << color << "�Դϴ�." << endl;
}

int Car::sum = 0;

int main() {
	//Car::showCarInfo(); --> ��ü�� �����ִ� �Ϲ� �޼ҵ�(�Լ�)�̱� ������ ������ ��. �Ϲ� �޼ҵ�� ��ü�� ������ �Ŀ� ȣ���� �� ����
	Car::showSum(); // static �޼ҵ�(�Լ�)�� ��ü�� �������� �ʴ��� ȣ���� �� ����(�̹� �޸� �� �����ϱ� ������)

	Car car1;
	car1.setCar(1000, "yellow");

	Car::showSum(); // car1�� �����ϰ����� showSum�̴ϱ� �⺻ �����ڿ� ���� sum++�� �����

	Car car2;
	car2.setCar(1111, "blue");

	Car::showSum(); // showSum()�� static�� �ƴϸ� ������ ��
}