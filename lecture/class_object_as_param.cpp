#include <iostream>
#include <string>

using namespace std;

class Car {
	// �⺻ ���������ڰ� private�̴ϱ� �����ص� ��
	int carNumber;
	string color;

public:
	int getCarNumber() { return carNumber; }
	string getColor() { return color; }
	void show();
	void setNumberColor(int num, string col);
};

void buy(Car c);
// void buy(Car* pC); ��ü �����͸� �μ��� ����ϴ� ���
// void buy(Car& c); ���۷����� �μ��� ����ϴ� ���

int main() {
	Car car1, car2;
	
	car1.setNumberColor(1000, "black");
	car2.setNumberColor(100, "yellow");
	buy(car1);
	buy(car2);
	// buy(&car2); ��ü �����͸� �μ��� ����ϴ� ��쿡�� �ּҸ� �Ѱ���
	// buy(car1); ��ü ���۷����� �μ��� ����ϴ� ��쿡�� Ŭ���� ����(��ü, �ν��Ͻ�)�� �Ѱ���
}

void Car::show() {
	cout << "������ ��ȣ�� " << carNumber << "�Դϴ�." << endl;
	cout << "������ ������ " << color << "�Դϴ�." << endl;
}

void Car::setNumberColor(int num, string col) {
	if (num > 0 && num <= 1000) {
		carNumber = num;
		color = col;
		cout << "���� ��ȣ�� " << carNumber << "(��)�� , ���� ������ " << color << "(��)�� �����߽��ϴ�." << endl;
	}
	else {
		cout << num << "�� �ùٸ� ���� ��ȣ�� �ƴմϴ�." << endl;
		cout << "������ȣ�� �ٲ� ���� �����ϴ�." << endl;
	}
	
}

void buy(Car c) {
	int number = c.getCarNumber();
	string col = c.getColor();

	cout << "���� ��ȣ " << number << ", ���� ���� " << col << "�� �ڵ����� �����߽��ϴ�." << endl;
}