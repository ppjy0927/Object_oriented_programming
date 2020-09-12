#include <iostream>

/*
	����������(����������) : public, private, protected

	����ü�� ���������ڰ� �����Ǿ��� �� public, Ŭ������ private���� ������
	��, Ŭ������ �⺻ ���������ڴ� private, ����ü�� �⺻ ���������ڴ� public

	���(������, �޼ҵ�)�� ������ private���� �����ϴ� ���� ĸ��ȭ(encapsulation), ����ȭ��� ��.
*/

using namespace std;

class Radio {
private:
	bool powerOn;
	float rf; // ���ļ�
	int volume; // ����

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << volume << "���� �����Ǿ����ϴ�." << endl;
 		}
		else {
			cout << "�� ���������� �������� �ʴ� ���� ũ���Դϴ�." << endl;
		}
	}

	void setPowerOn();

	// �ζ��� �Լ� ����
	void setPowerOff() {
		powerOn = false;
		cout << "������ �����ϴ�." << endl;
	}

	void setRf(float rfNum) {
		rf = rfNum;
		cout << "���� ���ļ��� " << rf << "�Դϴ�." << endl;
	}
};

int main() {
	Radio radio1;
	//radio1.powerOn = true;
	//radio1.rf = 89.1;
	// radio1.volume = 100;

	radio1.setPowerOn();
	radio1.setVolume(50);
	radio1.setRf(90.1);
}

// �Ϲ� �Լ� ����
void Radio::setPowerOn() {
	powerOn = true;
	cout << "������ �׽��ϴ�." << endl;
}