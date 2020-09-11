/*
#include "menu.h"
#include "menu.h"

int main() {
	Menu m = { 3, 4 };
	return 0;
}
*/
#include <iostream>
#include <string>
#include "menu.h"

using namespace std;

// 구현 부분은 cpp파일, 선언 부분은 header파일에
MENU ShowMenu() {
	while (1) {
		// 메뉴 보여주기
		cout << endl << "------------ 메뉴 ------------" << endl;
		cout << "1. 학생 성적 입력하기" << endl;
		cout << "2. 전체 성적 입력하기" << endl;
		cout << "Q. 프로그램 종료" << endl;
		cout << endl << "-----------------------------" << endl;
		cout << "메뉴 번호를 선택하세요(종료 시 Q/q를 선택) : ";

		char select;
		cin >> select;

		switch (select) {
		case '1':
			return MENU_ADD_STUDENT;
		case '2': 
			return MENU_SHOW_ALL;
		case 'Q':
		case 'q':
			return MENU_QUIT;
		default:
			cout << endl << "메뉴를 다시 한 번 확인하시고 입력하세요!!" << endl;
			break;
		}
	} // end of while
	return MENU_QUIT;
}