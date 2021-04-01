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
	NameCard(char *name, char *company, char *phone, int pos) : position(pos) {
		this->name = new char[strlen(name) + 1];
		this->company = new char[strlen(company) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->name, name);
		strcpy(this->company, company);
		strcpy(this->phone, phone);
	}
	NameCard(const NameCard &ref) : position(ref.position) {
		name = new char[strlen(ref.name) + 1];
		company = new char[strlen(ref.company) + 1];
		phone = new char[strlen(ref.phone) + 1];
		strcpy(name, ref.name);
		strcpy(company, ref.company);
		strcpy(phone, ref.phone);
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
	NameCard copy1 = manClerk;
	NameCard manSenior((char*)"Hong", (char*)"OrangeEng", (char*)"010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}