#include <iostream>

using namespace std;

struct StudentInfo {
	char name[10];
	int stdNumber;
	float grade[2];
};

int main() {
	//5���� �л��� ������ ����� ���ؼ� ����ü Ÿ������ �迭�� ����
	StudentInfo students[5] = {
		{"��浿", 20171001, {3.2f, 3.5f}},
		{"ȫ�浿", 20171002, {2.5f, 3.1f}},
		{"���浿", 20171003, {4.0f, 3.6f}},
		{"��浿", 20171004, {3.5f, 3.2f}},
		{"�ű浿", 20171005, {2.6f, 2.2f}}
	};

	cout << "---------- 1�б� / 2�б� �л� ���� ----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "�̸� : " << students[i].name << endl;
		cout << "�й� : " << students[i].stdNumber << endl;
		cout << "1, 2�б� ���� : " << students[i].grade[0] << ", " << students[i].grade[1] << endl;
	}
	cout << "------------------------------------------" << endl << endl;

	/*
	StudentInfo student1 = {"�踻��", 20170001, {3.5, 3.2};

	cout << "�̸� : " << student1.name << endl;
	cout << "�й� : " << student1.stdNumber << endl;
	cout << "1, 2�б� ���� : " << student1.grade[0] << ", " << student1.grade[1] << endl;
	*/
}