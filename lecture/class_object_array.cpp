#include <iostream>
	
using namespace std;

class Student {
	int stdNumber;
	int age;
public:
	// �⺻ ������
	Student(int number = 0, int a = 8);
	// ������ �����ε�
	Student(int num, int a);
	int getStdNumber();
	void setStdNumber(int number);
	void showInfo();
};

Student::Student(int number, int a) {
	stdNumber = 0;
	age = 8;
}

Student::Student(int num, int a) {
	stdNumber = num;
	age = a;
	cout << "�й��� " << stdNumber << "�̰�, ���̰� " << age << "�� �л� ��ü�� ��������ϴ�." << endl;
}

int Student::getStdNumber() {
	return stdNumber;
}

void Student::setStdNumber(int number) {
	stdNumber = number;
}

void Student::showInfo() {
	cout << "�й��� " << stdNumber << "�Դϴ�." << endl;
	cout << "���̰� " << age << "�Դϴ�." << endl;
}

int main() {
	// �迭 �ȿ� ��ü �����
	/*Student student[3]{
		Student(),
		Student(1101, 16),
		Student(1102, 17)
	};*/

	Student student[10];
	//Student student1(1001, 16);

	for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) { // �й��� int�ϱ� 10���̸� sizeof(student) = 40byte, sizeof(student[0]) = 4byte
		student[i].setStdNumber(i + 1);
		int number = student[i].getStdNumber();
		cout << number << "�� �л��Դϴ�." << endl;
	}
}