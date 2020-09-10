#include <iostream>

/*
	구조체를 인수로 사용하면, 그 구조체의 각 멤버의 값이 복사되어 함수로 넘어감.
	구조체의 멤버 수가 많을 경우
	- 함수를 호출할 때마다 많은 수의 멤버가 복사되어야 하므로 함수 호출이 지연될 수 있음.
	- 구조체 포인터를 인수로 넘기는 것이 좋음.
		- 구조체가 큰 경우에 속도가 향상됨.
		- 주소가 넘어가기 때문에 함수 안에서 구조체 변수의 멤버값을 화살표 연산자(->)를 이용해 변경시킬 수 있음.
*/

using namespace std;

struct Car {
	int number;
	double gas;
};

// 구조체 포인터를 인수로 받음
/*
void show(Car* pCar) {
	cout << "차량 번호는 " << pCar->number << ", 연료 양은 " << pCar->gas << "입니다." << endl;
}
*/

// 구조체 reference를 인수로 받음 (실제 같은 값을 가짐. 직접 값에 접근할 땐 pointer보다 편리함)
void show(Car& pCar) {
	cout << "차량 번호는 " << pCar->number << ", 연료 양은 " << pCar->gas << "입니다." << endl;
}

int main() {

	// 변수에 구조체 포인터 대신 구조체의 reference를 인수로 사용할 경우 
	Car car1 = { 0, 0.0 };

	cout << "차량의 번호를 입력하시오." << endl;
	cin >> car1.number;

	cout << "연료량을 입력하시오." << endl;
	cin >> car1.gas;

	//show(&car1); // 주소를 넘겨줘야 하므로 &를 붙임
	show(car1);
}