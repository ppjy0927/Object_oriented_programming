#include <iostream>

/*
	����ü(union data type) : ����� ������ ���� �ϳ��� ����ü�� ��Ÿ���� ���

	- ����ü ���� ��
	union ����ü�� {
		���� �ĺ���;
		���� �ĺ���;
		....
	}

	- ����ü���� ���� �� ���� �ϳ��� ������ �� ����.
	- ����ü�� ��� ����� ���� �޸� ������ �ڸ� ����.
*/

using namespace std;

union Year {
	int ad; // ����
	int dangi; // �ܱ�
};

int main() {
	Year myYear; // ���� ����ü ����
	
	cout << "���⸦ �Է��Ͻÿ�." << endl;
	cin >> myYear.ad;

	cout << "���� " << myYear.ad << "�� �Դϴ�." << endl;
	cout << "�ܱ� " << myYear.dangi << "�� �Դϴ�." << endl; // ad�� dangi�� �Ȱ��� ��µ�

	cout << "�ܱ⸦ �Է��Ͻÿ�." << endl;
	cin >> myYear.dangi;
	
	cout << "���� " << myYear.ad << "�� �Դϴ�." << endl;
	cout << "�ܱ� " << myYear.dangi << "�� �Դϴ�." << endl;
}