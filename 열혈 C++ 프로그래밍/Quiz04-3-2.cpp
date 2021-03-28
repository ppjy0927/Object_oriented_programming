#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum {CLERK, SENIOR, ASSIST, MANAGER};
	
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
		}
	}
}

class NameCard {
private:
	char *name;
	char *company;
	char *phone;
	int position;
public:
	NameCard(char *_name, char *_company, char *_phone, int pos) : position(pos) {
		name = new char[strlen(_name) + 1];
		company = new char[strlen(_company) + 1];
		phone = new char[strlen(_phone) + 1];
		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phone, _phone);
	}
	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	~NameCard() {
		delete[]name;
		delete[]company;
		delete[]phone;
	}
};

int main(void) {
	NameCard manClerk((char*)"Lee", (char*)"ABCEng", (char*)"010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior((char*)"Hong", (char*)"OrangeEng", (char*)"010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist((char*)"Kim", (char*)"SoGoodCamp", (char*)"010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}