#include <iostream>

int main(void)
{
	int num = 0;
	double salary;

	while (true) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> num;
		if (num > -1) {
			salary = 50 + num * 0.12;
			std::cout << "이번달 급여: " << salary << "만원" << std::endl;
		}
		else break;
	}
	std::cout << "프로그램을 종료합니다.";

	return 0;
}