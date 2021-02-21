#include <iostream>

int Adder(int num1 = 1, int num2 = 2); // 매개변수의 디폴트 값 지정은 함수의 선언부분에만 위치

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

int Adder(int num1, int num2) {
	return num1 + num2;
}