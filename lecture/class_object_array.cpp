#include <iostream>
	
using namespace std;

class Student {
	int stdNumber;
	int age;
public:
	// 기본 생성자
	Student(int number = 0, int a = 8);
	// 생성자 오버로딩
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
	cout << "학번이 " << stdNumber << "이고, 나이가 " << age << "인 학생 객체를 만들었습니다." << endl;
}

int Student::getStdNumber() {
	return stdNumber;
}

void Student::setStdNumber(int number) {
	stdNumber = number;
}

void Student::showInfo() {
	cout << "학번이 " << stdNumber << "입니다." << endl;
	cout << "나이가 " << age << "입니다." << endl;
}

int main() {
	// 배열 안에 객체 만들기
	/*Student student[3]{
		Student(),
		Student(1101, 16),
		Student(1102, 17)
	};*/

	Student student[10];
	//Student student1(1001, 16);

	for (int i = 0; i < sizeof(student) / sizeof(student[0]); i++) { // 학번이 int니까 10명이면 sizeof(student) = 40byte, sizeof(student[0]) = 4byte
		student[i].setStdNumber(i + 1);
		int number = student[i].getStdNumber();
		cout << number << "번 학생입니다." << endl;
	}
}