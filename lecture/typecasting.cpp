#include <iostream>

using namespace std;

int main() {
	int inum = 170;
	double dnum;
	dnum = (double)inum;

	double dnum2 = 170.5;
	int inum2;
	inum2 = (int)dnum2;

	cout << sizeof(inum) << endl;
	cout << sizeof(dnum) << endl;

	cout << "Ű�� " << inum << "��Ƽ�����Դϴ�. \n";
	cout << "Ű�� " << dnum << "��Ƽ�����Դϴ�. \n";
	
	cout << "Ű�� " << dnum2 << "��Ƽ�����Դϴ�. \n";
	cout << "Ű�� " << inum2 << "��Ƽ�����Դϴ�. \n";

	// ����ȯ ������ : ( ���̸� ) --> ĳ��Ʈ ������
	// �� ) dnum = (double)inum; // ���� ������ -> ū ������ ��ȯ
	//		inum = (int)dnum; // ū ������ -> ���� ������ ��ȯ

	int d = 2;
	const double pi = 3.14;
	
	cout << "������ " << d << "��Ƽ������ ���� " << endl;
	cout << "�ѷ��� " << d * pi << "��Ƽ�����Դϴ�." << endl;

	int num1 = 5;
	int num2 = 4;

	double result;

	result = (double)num1 / num2; // �Ѵ� int�̸� �Ҽ��� ������ ����(1)�� ��� 

	cout << "5 / 4�� " << result << "�Դϴ�." << endl;
}