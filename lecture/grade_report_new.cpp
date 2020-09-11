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
		// 메뉴 보여주기
		MENU select;
		select = ShowMenu();

		switch (select) {
		case MENU_ADD_STUDENT:
		{
			// 학생 성적 추가
			bool succeeded;
			succeeded = AddStudent();
			if (succeeded)
				cout << endl << "학생 성적이 제대로 입력되었습니다." << endl;
			else
				cout << endl << "더 이상 입력할 수 없습니다." << endl;
			break;
		}
		case MENU_SHOW_ALL:
		{
			// 전체 성적 확인
			ShowAll();
		}
		case MENU_QUIT:
		{
			cout << endl << "프로그램을 종료합니다." << endl;
			return 0;
		}
		}
	}
}