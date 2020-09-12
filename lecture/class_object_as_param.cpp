#include <iostream>
#include <string>

using namespace std;

class Car {
	// 기본 접근제어자가 private이니까 생략해도 됨
	int carNumber;
	string color;

public:
	int getCarNumber() { return carNumber; }
	string getColor() { return color; }
	void show();
	void setNumberColor(int num, string col);
};

void buy(Car c);
// void buy(Car* pC); 객체 포인터를 인수로 사용하는 경우
// void buy(Car& c); 레퍼런스를 인수로 사용하는 경우

int main() {
	Car car1, car2;
	
	car1.setNumberColor(1000, "black");
	car2.setNumberColor(100, "yellow");
	buy(car1);
	buy(car2);
	// buy(&car2); 객체 포인터를 인수로 사용하는 경우에는 주소를 넘겨줌
	// buy(car1); 객체 레퍼런스를 인수로 사용하는 경우에는 클래스 변수(객체, 인스턴스)를 넘겨줌
}

void Car::show() {
	cout << "차량의 번호는 " << carNumber << "입니다." << endl;
	cout << "차량의 색상은 " << color << "입니다." << endl;
}

void Car::setNumberColor(int num, string col) {
	if (num > 0 && num <= 1000) {
		carNumber = num;
		color = col;
		cout << "차량 번호를 " << carNumber << "(으)로 , 차량 색상을 " << color << "(으)로 변경했습니다." << endl;
	}
	else {
		cout << num << "는 올바른 차량 번호가 아닙니다." << endl;
		cout << "차량번호는 바꿀 수가 없습니다." << endl;
	}
	
}

void buy(Car c) {
	int number = c.getCarNumber();
	string col = c.getColor();

	cout << "차량 번호 " << number << ", 차량 색상 " << col << "인 자동차를 구입했습니다." << endl;
}