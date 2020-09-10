#include <iostream>

using namespace std;

struct Car {
	int number;
	float gas;
};

void show(Car c) {
	cout << "차량의 번호는 " << c.number << ", 연료의 양은 " << c.gas << endl;
} // 구조체를 함수의 인수로 넘겨줘서 사용할 수 있음

int main() {
	Car car1 = { 0, 0.0 };

	cout << "차량의 번호를 입력하시오." << endl;
	cin >> car1.number;

	cout << "연료량을 입력하시오." << endl;
	cin >> car1.gas;

	show(car1);
}
