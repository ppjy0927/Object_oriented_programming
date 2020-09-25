// c++ ���� �Լ��� ���� �Լ��� ��� �Լ��� ����

/*
	���� �Լ� : �����Լ�, namespace ���� ���� �Լ�, static �Լ�
	��� �Լ� : Ŭ���� ���� �ִ� �Լ�

	�Լ��� ȣ��
	- ���� �Լ� ȣ��(���� �Լ�)
	- ��ü�� ����Լ� ȣ��(��� �Լ�)
	- ��ü�� �ּҷ� ����Լ��� ȣ��(��� �Լ�)
*/

#include <iostream>

using namespace std;

// ���� �Լ�
void Output() {
	cout << "���� �Լ� Output()" << endl;
}

class Point {
public:
	// ��� �Լ�
	void Output() {
		cout << " ��� �Լ� Output() " << endl;
	}
};

int main() {
	Point pt;
	Point *p = &pt; // pt�� �ּҰ��� ��Ÿ���� ������
	 
	Output(); // ���� �Լ� ȣ��
	pt.Output(); // ��ü�� ��� �Լ��� ȣ��
	p->Output(); // �ּҷ� ��� �Լ��� ȣ��

	return 0;
}