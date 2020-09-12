#include <iostream>
#include <string>

/*
	생성자(constructor) : 객체가 생성될 때 자동으로 호출되는 특수한 멤버함수
	붕어빵의 내용물(팥, 슈크림 등)을 바꿔주는 것처럼 초기화해주는 함수

	생성자를 단 하나도 정의하지 않았다면 컴파일러가 자동으로 텅빈 생성자를 호출함.
	예 >
		Car() {
		} // 컴파일러가 다음과 같은 생성자를 자동으로 호출함
*/

using namespace std;

class Car {
	int carNumber;
	string color;
public:
	// 객체의 초기화 작업을 하는 생성자
	Car() {
		carNumber = 0;
		color = "yellow";
		cout << "자동차가 만들어졌습니다." << endl;
	}

	Car(int num, string col) {
		carNumber = num;
		color = col;
		cout << "차량 번호가 " << carNumber << ", 차량 색상이 " << col << "인 자동차가 만들어졌습니다." << endl;
	}

	// Car() {} // 생성자를 정의하지 않았을 경우 컴파일러에서는 기본적으로 이와 같은 생성자가 호출됨 

	void show() {
		cout << "차량 번호는 " << carNumber << "입니다." << endl;
		cout << "차량 색상은 " << color << "입니다." << endl;
	}
};

int main() {
	Car car1; // 인수가 없는 생성자를 호출해서 만들어진 객체
	Car car2(1111, "Blue"); // 인수를 2개를 받는 생성자를 호출해서 만들어진 객체

	car1.show();
}