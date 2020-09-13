#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	int sNo;

	Student(const string& name_arg, int stdNumber); // �ּҰ��� ������ �ʵ��� ref
	~Student();

public:
	static int student_count;
	static void OutputStdCount();
};

// ���� ��� ���� �ʱ�ȭ
int Student::student_count = 0;

// ���� ��� �Լ�
void Student::OutputStdCount() {
	cout << "Student ��ü �� = " << student_count << endl;
}

Student::Student(const string& name_arg, int stdNumber) {
	student_count++;
	name = name_arg;
	sNo = stdNumber;
}

Student::~Student() {
	// �л� ��ü�� ���� ���ҽ�Ŵ
	student_count--;
	Student::OutputStdCount();
}

void Func() {
	Student student1("���浿", 11111);
	Student student2("��浿", 12222);
	Student::OutputStdCount(); // ��ü�� ���ӵ��� ���� ���¿��� ȣ���ϰ� ����.
}

int main() {
	Student::OutputStdCount(); // #01

	//��ü ����
	Student std("��浿", 22222);
	Student::OutputStdCount(); // #02

	Func(); // #03
	Student::OutputStdCount(); // #04
}

// ���
// Student ��ü �� = 0 // #01
// Student ��ü �� = 1 // #02
// Student ��ü �� = 3 // #03
// Student ��ü �� = 2 // #03���� }�� ������ ���� �Ҹ��� 2ȸ ȣ�� --> 1��° --����
// Student ��ü �� = 1 // #03���� }�� ������ ���� �Ҹ��� 2ȸ ȣ�� --> 2��° --����
// Student ��ü �� = 1 // #04
// Student ��ü �� = 0 // main �Լ����� }�� ������ ���� std�� ���� �Ҹ��� 1ȸ ȣ��