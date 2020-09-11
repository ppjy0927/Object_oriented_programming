#include <iostream>
#include <string>
#include <iomanip>
#include "menu.h"
#include "students.h"

using namespace std;

struct Student {
	int stuNumber;
	string name;
	int kor, eng, math;
	float avg;
};

int main() {
	while (1) {
		// �޴� �����ֱ�
		MENU select;
		select = ShowMenu();

		switch (select) {
		case MENU_ADD_STUDENT:
		{
			// �л� ���� �߰�
			bool succeeded;
			succeeded = AddStudent();
			if (succeeded)
				cout << endl << "�л� ������ ����� �ԷµǾ����ϴ�." << endl;
			else
				cout << endl << "�� �̻� �Է��� �� �����ϴ�." << endl;
			break;
		}
		case MENU_SHOW_ALL:
		{
			// ��ü ���� Ȯ��
			ShowAll();
		}
		case MENU_QUIT:
		{
			cout << endl << "���α׷��� �����մϴ�." << endl;
			return 0;
		}
		}
	}
}