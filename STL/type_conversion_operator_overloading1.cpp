// Ÿ�� ��ȯ ������ �����ε�

/*
	����ڰ� ���� �����ؼ� Ÿ�� ��ȯ�� �� �ִ� ���
	- �����ڸ� �̿��ؼ� Ÿ�Ժ�ȯ
	- Ÿ�Ժ�ȯ ������ �����ε��� �̿��� Ÿ�Ժ�ȯ
*/

#include <iostream>

using namespace std;

class A {

};

class B {
public:
	B() {
		cout << "B ���� ������" << endl;
	}
	B(A& _a) {
		cout << "B(A_a) ������" << endl;
	}
	B(int i) {
		cout << "B(int i) ������" << endl;
	}
	B(double d) {
		cout << "B(double d) ������" << endl;
	}
};

int main(){
	A a;
	int i = 100;
	double d = 5.4;

	B b;
	// AŸ���� ��ü�� BŸ������ ��ȯ
	b = a; // b = B(a) �Ͻ��� ������ ȣ�� �Ŀ� ����
	// ������ Ÿ���� BŸ������ ��ȯ
	b = i; // b = B(i) �Ͻ��� ������ ȣ�� �Ŀ� ����
	// double�� Ÿ���� BŸ������ ��ȯ
	b = d; // b = B(d) �Ͻ��� ������ ȣ�� �Ŀ� ����

	return 0;
}