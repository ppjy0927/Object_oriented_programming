#include <iostream>

using namespace std;

/*
	char 타입 : 한 바이트의 영문자를 표시한다.
*/

int main() {
	char en[] = "Hello world";

	cout << "char" << en << endl;
	
	//
	cin >> en;
	for (int i = 0; en[i]; i++) {
		cout << (char)en[i];
	}
	cout << endl;
	cout << "배열의 크기는 " << sizeof(en) << "입니다." << endl;
	//

	char wc[] = "한글을 처리";
	cout << wc << endl;
	cout << sizeof(wc) << endl; // 12 출력(한글은 한 글자 당 2byte, 공백 1byte, null 1byte)
	cout << strlen(wc) << endl; // 11 출력(한글은 한 글자 당 2byte, 공백 1byte)

	int i = 0;
	while (wc[i]) {
		cout << (char)wc[i];
		i++;
	}
	cout << endl;
}