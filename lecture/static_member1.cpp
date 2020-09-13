#include <iostream>
#include <string>

/*
	정적멤버(변수, 함수) : 모든 객체가 공유하는 멤버

	static 멤버 함수는 객체가 생성되지 않은 상태에서도 호출되어야 하기 때문에 특정 객체와 연결되어 있는 일반 멤버에는 접근할 수 없음
	--> static 멤버 함수에는 static 변수만!
*/

using namespace std;

class Car {
	int carNumber;
	string color;
public:
	static int sum; // 이미 프로그램이 시작될 때 메모리 상에서 sum이라는 변수가 만들어지는 것, 모든 객체가 공유하는 멤버
	Car();
	void setCar(int number, string col);
	void showCarInfo(); // 객체에 속해 있는 함수(학생의 책상, 의자)
	static void showSum(); // 모든 객체가 공유하는 멤버(학생들이 공유하는 출입문, 청소도구), 변수 뿐 아니라 함수에도 static을 쓸 수 있음
};

Car::Car() {
	carNumber = 0;
	color = "black";
	sum++; // sum은 static이니까 객체 안에 포함되어 있는 것이 아니기 때문에 ++이 가능한 것
	cout << "자동차가 만들어졌습니다." << endl;
}

void Car::setCar(int number, string col) {
	carNumber = number;
	color = col;
	cout << "차량 번호를 " << carNumber << "(으)로, 차량 색상을 " << color << "(으)로 바꾸었습니다." << endl;
}

void Car::showSum() {
	cout << "자동차는 모두 " << sum << "대 있습니다." << endl;
}

void Car::showCarInfo() {
	cout << "차량 번호는 " << carNumber << "입니다." << endl;
	cout << "차량 색상은 " << color << "입니다." << endl;
}

int Car::sum = 0;

int main() {
	//Car::showCarInfo(); --> 객체에 속해있는 일반 메소드(함수)이기 때문에 에러가 남. 일반 메소드는 객체를 생성한 후에 호출할 수 있음
	Car::showSum(); // static 메소드(함수)는 객체를 생성하지 않더라도 호출할 수 있음(이미 메모리 상에 존재하기 때문에)

	Car car1;
	car1.setCar(1000, "yellow");

	Car::showSum(); // car1을 생성하고나서의 showSum이니까 기본 생성자에 의해 sum++이 실행됨

	Car car2;
	car2.setCar(1111, "blue");

	Car::showSum(); // showSum()이 static이 아니면 에러가 남
}