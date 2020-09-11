#include <iostream>
#include "header3.h"

/*
	다른 구현 파일에 있는 함수를 사용할 수 있도록, 헤더 파일을 만들어서 include함.
	구현 파일(header3.cpp)의 파일 이름을 따서 헤더 파일(header3.h)의 이름을 짓는 것이 편리함.
	이 때 헤더 파일은 공유될 함수의 프로토타입을 적어줌.
*/

using namespace std;

int main() {
	int result;
	result = Plus(2, 4);
}