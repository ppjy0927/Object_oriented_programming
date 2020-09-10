#include <iostream>
#include <string>

/*
	## user defined type
	- 구조체형 : 사용자 정의형 중의 하나(열거형과 마찬가지로 프로그래머가 만들 수 있는 사용자 정의형)
	 : 다른 형들을 묶어주는 기능
	 예 > 차량번호(int형)와 연료의 양(double형)과 같은 다른 형의 값을 하나로 묶어서 차의 기본적인 속성을 표현할 수 있도록 한 것
	-----------------------------------------------------------------------------------------------------------
	 # 구조체 선언
	 형태 >
	 struct 구조체형명 {
		형명 식별자;
		형명 식별자;
		....
	 };

	 예 > 사용자가 정의한 Car라는 이름의 구조체형
	 struct Car{
		int number; // 차량 번호
		double gas; // 연료의 양
	};
	위에 Car 안에 선언된 number, gas를 멤버 또는 멤버변수 또는 속성이라고 함.
	----------------------------------------------------------------------------------------------------------
	# 구조체형의 변수 선언하기(구조체 선언) : 구조체형 변수를 선언하면 그 변수는 구조체가 됨.
	형태 > 구조체형명 구조체 변수명;

	예 > Car car1; // Car 구조체형의 car1이라는 구조체를 새롭게 정의한 것

	구조체 멤버에 접근하기 : 도트연산자,점연산자(.)로 접근
	car1.number; // 구조체변수명.멤버

	구조체멤버에 값을 대입
	car1.number = 1000; 
	car1.gas = 20.0;
*/

using namespace std;

struct StudentInfo {
	int stdNumber;
	string bloodType; // AB형일 수도 있으니 char형이 아닌 string형이 되어야 함
	float grade;
};

int main() {
	StudentInfo student1 = {20170001, "A", 3.2f}; // 초기화 간단히하는 방법
	StudentInfo student2 = {20170002, "AB", 3.8f};

	// 간단한 경우에는 한 줄로도 표현 가능
	//	StudentInfo student1 = { 20170001, "A", 3.2f }, student2 = { 20170002, "AB", 3.8f };

	/*student1.stdNumber = 20170001;
	student1.bloodType = 'A';
	student1.grade = 3.2f;

	student2.stdNumber = 20170002;
	student2.bloodType = 'AB';
	student2.grade = 3.8f;*/

	cout << " --- 첫 번째 학생의 정보 --- " << endl;
	cout << "학번 : " << student1.stdNumber << endl;
	cout << "혈액형 : " << student1.bloodType << endl;
	cout << "학점 : " << student1.grade << endl;

	cout << " --- 두 번째 학생의 정보 --- " << endl;
	cout << "학번 : " << student2.stdNumber << endl;
	cout << "혈액형 : " << student2.bloodType << endl;
	cout << "학점 : " << student2.grade << endl;

	// 메인 함수 내에서도 구조체형 선언 가능
	struct Point {
		int x;
		int y;
	};

	// 구조체형을 선언함과 동시에 구조체를 바로 만들 수도 있음
	/*
	struct Point {
		int x; 
		int y;
	} p1 = { 30, 20 }, p2;
	*/

	Point p1 = { 30, 20 };
	Point p2;

	p2 = p1; // 구조체 끼리 대입 가능

	cout << "p1 = ( " << p1.x << ", " << p1.y << " )" << endl;
	cout << "p2 = ( " << p2.x << ", " << p2.y << " )" << endl;
}