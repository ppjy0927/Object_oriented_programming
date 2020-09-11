#include "students.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
	int stuNumber;
	string name;
	int kor, eng, math;
	float avg;
};

const int MAX_STUDENTS = 50;
Student students[MAX_STUDENTS];

float total_avg = 0.0f;
int num_of_stu = 0; // 현재까지 입력된 학생 수

//학생 성적 추가 함수, 더 이상 입력할 수 없는 경우에는 false값 리턴
bool AddStudent() {
	if (MAX_STUDENTS == num_of_stu)
		return false;

	// 레퍼런스를 활용해 코드를 간결하게 처리 : 레퍼런스는 보통 변수를 대입 받음
	Student &std = students[num_of_stu];
	std.stuNumber = num_of_stu + 1;

	// 학생의 이름과 국어, 영어, 수학 점수를 입력 받음
	cout << "이름(공백 없이), 국어, 영어, 수학 점수를 입력하세요." << endl;
	cin >> std.name >> std.kor >> std.eng >> std.math;

	// 개인 평균 점수 계산
	std.avg = float(std.kor + std.eng + std.math) / 3.0f; // std.avg를 float형으로 출력하기 위해 나누는 수도 f를 붙임

	// 전체 평균 점수 계산
	const int current = num_of_stu + 1;
	const int prev = num_of_stu;
	total_avg = (total_avg / current) + (std.avg / current);

	// 입력 받은 학생 수를 증가시킴
	num_of_stu++;
	return true;
}

// 전체 성적 확인 함수
void ShowAll() {
	cout.precision(2); // 소수점 둘째자리까지 출력하기 위해 설정
	cout << fixed;

	cout << endl << "        < 전체 성적 확인>";
	cout << endl << "학번  이름  국어  영어  수학  평균" << endl;

	for (int i = 0; i < num_of_stu; ++i) {
		const Student& std = students[i];
		cout << setw(4) << std.stuNumber << setw(9) << std.name;
		cout << setw(6) << std.kor << setw(6) << std.eng;
		cout << setw(6) << std.math << setw(10) << std.avg << endl;
	}
	cout << endl << "전체 평균 : " << total_avg << endl;
}