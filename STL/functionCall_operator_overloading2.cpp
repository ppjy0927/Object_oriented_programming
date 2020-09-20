// �Լ� ȣ�� ������ �����ε�

#include <iostream>

using namespace std;

struct FuncObj {
	void operator() (int arg) const {
		cout << "���� : " << arg << endl;
	}

	void operator() (int arg1, int arg2) const {
		cout << "���� : " << arg1 << ", " << arg2 << endl;
	}

	void operator() (int arg1, int arg2, int arg3) const {
		cout << "���� : " << arg1 << ", " << arg2 << ", " << arg3 << endl;
	}
};

int main() {
	FuncObj print;
	print(100); // ��ü ���� �� ȣ��(�Ͻ���)
	print(100, 200);
	print(100, 200, 300);
	cout << endl;

	print.operator()(100); //��ü ���� �� ȣ��(�����)
	print.operator()(100, 200);
	print.operator()(100, 200, 300);
	cout << endl;

	FuncObj()(100); // �ӽ� ��ü ȣ��(�Ͻ���)
	FuncObj()(100, 200);
	FuncObj()(100, 200, 300);
	cout << endl;

	FuncObj().operator()(100); // �ӽ� ��ü ȣ��(�����)
	FuncObj().operator()(100, 200);
	FuncObj().operator()(100, 200, 300);

	return 0;
}

/*
	�ӽ� ��ü�� Ŭ���� �̸����ε� ���� ����
	�ӽ� ��ü�� �� ���忡���� ����� �� ����. --> �� ���忡�� �����ǰ� ������ ����� �ٷ� �Ҹ��.
*/