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

// ���� �κ��� cpp����, ���� �κ��� header���Ͽ�
MENU ShowMenu() {
	while (1) {
		// �޴� �����ֱ�
		cout << endl << "------------ �޴� ------------" << endl;
		cout << "1. �л� ���� �Է��ϱ�" << endl;
		cout << "2. ��ü ���� �Է��ϱ�" << endl;
		cout << "Q. ���α׷� ����" << endl;
		cout << endl << "-----------------------------" << endl;
		cout << "�޴� ��ȣ�� �����ϼ���(���� �� Q/q�� ����) : ";

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
			cout << endl << "�޴��� �ٽ� �� �� Ȯ���Ͻð� �Է��ϼ���!!" << endl;
			break;
		}
	} // end of while
	return MENU_QUIT;
}