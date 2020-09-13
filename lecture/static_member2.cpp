#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int sNo;

	Student(const string& name_arg, int stdNumber); // 주소값이 변하지 않도록 ref
	~Student();

public:
	static int student_count;
	static void OutputStdCount();
};

// 정적 멤버 변수 초기화
int Student::student_count = 0;

// 정적 멤버 함수
void Student::OutputStdCount() {
	cout << "Student 객체 수 = " << student_count << endl;
}

Student::Student(const string& name_arg, int stdNumber) {
	student_count++;
	name = name_arg;
	sNo = stdNumber;
}

Student::~Student() {
	// 학생 객체의 수를 감소시킴
	student_count--;
	Student::OutputStdCount();
}

void Func() {
	Student student1("강길동", 11111);
	Student student2("고길동", 12222);
	Student::OutputStdCount(); // 객체에 종속되지 않은 상태에서 호출하고 있음.
}

int main() {
	Student::OutputStdCount(); // #01

	//객체 생성
	Student std("고길동", 22222);
	Student::OutputStdCount(); // #02

	Func(); // #03
	Student::OutputStdCount(); // #04
}

// 출력
// Student 객체 수 = 0 // #01
// Student 객체 수 = 1 // #02
// Student 객체 수 = 3 // #03
// Student 객체 수 = 2 // #03에서 }를 만나기 직전 소멸자 2회 호출 --> 1번째 --실행
// Student 객체 수 = 1 // #03에서 }를 만나기 직전 소멸자 2회 호출 --> 2번째 --실행
// Student 객체 수 = 1 // #04
// Student 객체 수 = 0 // main 함수에서 }를 만나기 직전 std에 대한 소멸자 1회 호출