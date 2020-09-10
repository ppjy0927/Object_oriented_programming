#include <iostream>

/*
	## type + definition : typedef
	int��, double���� ���� �Ϲ����� ������ �ٿ��ִ� Ű����

	- ����, Ÿ�� ���� �̸��� �������� �� ����ϴ� ������
	- typedef�� ���ؼ� Ÿ���� �������� �̽ļ��� ����ų �� ����.
	- �� �̸����� ������ �� ��� �̸��� ��������(������ �ٿ���) ���Ǽ��� ���� �� ����.

	  ���� > typedef ���� �ĺ���;

	
	## ����� ������(user defined type) : ����ڰ� ���� ��
	- ������ : ���α׷��Ӱ� ���ο� ���� ���� �� �ֵ��� �����ϴ� ���
			  enum Ű���带 �̿���.
	  
	  ���� > enum �������� {�ĺ���1, �ĺ���2, �ĺ���3, ......}
*/

using namespace std;

// ������ ����
	enum Week {SUN, MON, TUE, WED, THU, FRI, SAT};

	int main() {
	typedef unsigned int Count;
	Count num = 1;	// unsigned int num = 1;�� ���� �ǹ�

	// ������ ���� ����
	Week w; // 7���� �ĺ��� �� �߿� �ϳ��� �����ؼ� ����� �� �ִ� ��������(������)�� �Ǵ� ��
	w = TUE;

	switch (w) {
	case SUN: cout << "�Ͽ��� �Դϴ�." << endl; break;
	case MON: cout << "������ �Դϴ�." << endl; break;
	case TUE: cout << "ȭ���� �Դϴ�." << endl; break;
	case WED: cout << "������ �Դϴ�." << endl; break;
	case THU: cout << "����� �Դϴ�." << endl; break;
	case FRI: cout << "�ݿ��� �Դϴ�." << endl; break;
	case SAT: cout << "����� �Դϴ�." << endl; break;
	default: cout << "���� �������� �� �� �����ϴ�." << endl; break;
	}
}