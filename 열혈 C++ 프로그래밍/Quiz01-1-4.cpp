#include <iostream>

int main(void)
{
	int num = 0;
	double salary;

	while (true) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> num;
		if (num > -1) {
			salary = 50 + num * 0.12;
			std::cout << "�̹��� �޿�: " << salary << "����" << std::endl;
		}
		else break;
	}
	std::cout << "���α׷��� �����մϴ�.";

	return 0;
}