// 클라이언트 코드와 서버 코드

// callback 메커니즘
// 클라이언트가 서버를 호출하면 콜(call)이라고 함
// 서버가 클라이언트를 호출하면 콜백(callback)이라고 함

#include <iostream>

using namespace std;

void Output_info() {
	cout << "정보 출력!!" << endl;
}

int main() {
	Output_info();

	return 0;
}