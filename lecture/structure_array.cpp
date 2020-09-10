#include <iostream>

using namespace std;

struct StudentInfo {
	char name[10];
	int stdNumber;
	float grade[2];
};

int main() {
	//5명의 학생의 정보를 만들기 위해서 구조체 타입으로 배열을 선언
	StudentInfo students[5] = {
		{"고길동", 20171001, {3.2f, 3.5f}},
		{"홍길동", 20171002, {2.5f, 3.1f}},
		{"강길동", 20171003, {4.0f, 3.6f}},
		{"김길동", 20171004, {3.5f, 3.2f}},
		{"신길동", 20171005, {2.6f, 2.2f}}
	};

	cout << "---------- 1학기 / 2학기 학생 평점 ----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "이름 : " << students[i].name << endl;
		cout << "학번 : " << students[i].stdNumber << endl;
		cout << "1, 2학기 학점 : " << students[i].grade[0] << ", " << students[i].grade[1] << endl;
	}
	cout << "------------------------------------------" << endl << endl;

	/*
	StudentInfo student1 = {"김말똥", 20170001, {3.5, 3.2};

	cout << "이름 : " << student1.name << endl;
	cout << "학번 : " << student1.stdNumber << endl;
	cout << "1, 2학기 학점 : " << student1.grade[0] << ", " << student1.grade[1] << endl;
	*/
}