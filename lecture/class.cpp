#include <iostream>

/*
	클래스 : 현실 세계의 존재하는 모든 사물의 상태 및 특성, 그에 관련된 기능을 정리해서 프로그램으로 표현한 것

	클래스는 데이터 멤버(변수)와 멤버 함수(메소드)를 가짐.
	데이터 멤버는 사물의 성질이나 상태를 표현
	멤버 함수는 사물의 기능을 표현
*/

using namespace std;

/*클래스를 선언하는 방법*/

class Car {
public:
	int number;
	double gas;
	void show();
};

// Car 클래스의 멤버 함수를 정의
void Car::show() {
	cout << "차량 번호는 " << number << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
}

/*
	클래스 이용하기

	클래스명 변수명;
	예> Car car1 // 이 때 car1을 객체(object) 또는 인스턴스(instance)라고 함. Car라는 설계도로 만들어진 복제물

	도트연산자(.)를 이용해 클래스 멤버에 접근 가능
	예> car1.number = 1222; // car1객체의 number멤버에 접근해서 새로운 값을 할당 받음
		car1.show(); // 멤버함수에 접근할 때도 마찬가지
*/

int main() {
	Car car1, car2;

	car1.number = 1000;
	car1.gas = 50.1;
	car1.show();

	car2.number = 1002;
	car2.gas = 20.5;
	car2.show();
}



