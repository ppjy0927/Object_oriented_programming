#include <iostream>

using namespace std;

class Demo {
public:
	Demo() { // ������
		cout << "�����ڰ� ȣ��Ǿ����ϴ�!!" << endl;
	}
	~Demo() { // �Ҹ���
		cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�!!" << endl;
	}
};

Demo globalDemo; // ������ü

void test() {
	cout << "------- test �Լ��� { �����Դϴ�." << endl;
	Demo demoObj; // ���ð�ü
	cout << "------- test �Լ��� } ���Դϴ�." << endl;
}

int main() {
	cout << "���α׷�(main)�� { �����Դϴ�." << endl;
	globalDemo;
	test();
	cout << "���α׷�(main)�� } ���Դϴ�." << endl;
}

// ���
// �����ڰ� ȣ��Ǿ����ϴ�!!           --> ������ü
// ���α׷�(main)�� { �����Դϴ�.
// ------- test �Լ��� { �����Դϴ�.
// �����ڰ� ȣ��Ǿ����ϴ�!!           --> ���ð�ü
// ------- test �Լ��� } ���Դϴ�.
// �Ҹ��ڰ� ȣ��Ǿ����ϴ�!!           --> ���ð�ü
// ���α׷�(main)�� } ���Դϴ�.
// �Ҹ��ڰ� ȣ��Ǿ����ϴ�!!           --> ������ü