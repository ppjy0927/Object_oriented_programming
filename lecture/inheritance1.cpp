#include <iostream>

/*
	객체 지향 언어에서 지원하는 개념에는
	- 추상화 (abstraction) 
	- 캡슐화 (encapsulation)
	- 상속 (inheritance)
	- 다형성 (polymorphism)

	상속 : 코드의 재사용성을 높이는 것.(프로그램 코드의 재사용을 목적으로 함.)

	//////////////////////////////////////////////////////////////
	파생클래스 선언
	class 파생 클래스명 : 접근지정자 기본클래스명
	{
		파생클래스에 추가할 멤버 선언
	}

	상속 시 접근지정자 : public, private, protected

	1. private으로 지정할 경우
		- 부모 클래스의 모든 멤버는 파생클래스에서 private으로 지정됨
	
	2. protected으로 지정할 경우
		- 부모 클래스의 public으로 지정된 멤버는 protected로 지정되며, 나머지는 부모 클래스의 접근 권한과 동일하게 지정됨

	3. public으로 지정할 경우
		- 부모 클래스에서 지정한 권한은 파생클래스의 멤버들에게도 똑같이 지정됨
	
	////////////////////////////////////////////////////////////////
	파생 클래스의 객체를 생성할 때

	- 슈퍼 클래스의 생성자가 호출된 다음에, 파생 클래스의 생성자가 호출됨
	- 슈퍼 클래스의 생성자가 호출될 때는 인자(인수)없는 생성자가 자동으로 호출됨
	- 기본(슈퍼) 클래스의 생성자는 파생 클래스가 상속받지 않음 --> 상속받지 않기 때문에 호출하는 것
		
	- 기본 클래스의 생성자가 여러 개가 정의되어 있을 경우에는, 그 중의 하나를 선택할 수 있음

	예>
		파생클래스명::파생클래스 생성자(인수목록) : 기본클래스의 생성자(인수목록)
		{
			파생클래스의 생성자 본체 정의
		}
*/

using namespace std;

class Car {
private:
	int carNumber;
	double gas;
public:
	Car(); // 인자 없는 생성자
	Car(int num, double g); // 인자 있는 생성자
	void setCar(int num, double g);
	void show();
};

// 레이싱 카 클래스 선언(파생클래스 선언)
class RacingCar :public Car {
private:
	int course; // 경주용 차의 코스
public:
	RacingCar(); 
	RacingCar(int num, double g, int c);
	void setCourse(int c);
};

Car::Car() {
	carNumber = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다." << endl;
}

Car::Car(int num, double g) {
	carNumber = num;
	gas = g;
	cout << "차량 번호가 " << carNumber << "이고, 연료량이 " << gas << "인 자동차가 만들어졌습니다." << endl;
}

void Car::setCar(int num, double g) {
	carNumber = num;
	gas = g;
	cout << "차량 번호를 " << carNumber << "(으)로, 연료량을 " << gas << "(으)로 바꾸었습니다." << endl;
}

void Car::show() {
	cout << "차량 번호는 " << carNumber << "입니다." << endl;
	cout << "연료량은 " << gas << "입니다." << endl;
}

// 레이싱카의 멤버함수 정의
RacingCar::RacingCar() {
	course = 0;
	cout << "레이싱카가 만들어졌습니다." << endl;
}

RacingCar::RacingCar(int num, double g, int c) : Car(num, g) { // 슈퍼클래스의 생성자 중, 인자가 있는 생성자를 호출함
	course = c;
	cout << "코스 번호가 " << course << "인 레이싱카가 만들어졌습니다." << endl;
}

void RacingCar::setCourse(int c) {
	course = c;
	cout << "코스 번호를 " << course << "번으로 정했습니다." << endl;
}

int main() {
	RacingCar racingcar(11111, 50.5, 10);
}

/*
RacingCar racingcar(11111, 50.5, 10);

차량 번호가 11111이고, 연료량이 50.5인 자동차가 만들어졌습니다. --> 기본클래스의 인자 생성자 호출
코스 번호가 10인 레이싱카가 만들어졌습니다. -->	파생클래스의 인자 생성자 호출
*/


/*
RacingCar racingcar;
racingcar.setCar(11111, 30.5);
racingcar.setCourse(10);

자동차가 만들어졌습니다. --> 부모클래스의 인자 없는 생성자까지 호출됨.
레이싱카가 만들어졌습니다.
차량 번호를 11111(으)로, 연료량을 30.5(으)로 바꾸었습니다.
코스 번호를 10번으로 정했습니다.
*/