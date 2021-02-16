// 01-1 : printf와 scanf를 대신하는 입출력 방식

#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}