#include <iostream>

/*
	접근제어자(접근지정자) : public, private, protected

	구조체는 접근제어자가 생략되었을 때 public, 클래스는 private으로 설정됨
	즉, 클래스의 기본 접근제어자는 private, 구조체의 기본 접근제어자는 public

	멤버(데이터, 메소드)의 접근을 private으로 제한하는 것을 캡슐화(encapsulation), 은닉화라고 함.
*/

using namespace std;

class Radio {
private:
	bool powerOn;
	float rf; // 주파수
	int volume; // 볼륨

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨이 " << volume << "으로 설정되었습니다." << endl;
 		}
		else {
			cout << "이 라디오에서는 지원되지 않는 볼륨 크기입니다." << endl;
		}
	}

	void setPowerOn();

	// 인라인 함수 형식
	void setPowerOff() {
		powerOn = false;
		cout << "라디오를 껐습니다." << endl;
	}

	void setRf(float rfNum) {
		rf = rfNum;
		cout << "현재 주파수는 " << rf << "입니다." << endl;
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

// 일반 함수 형식
void Radio::setPowerOn() {
	powerOn = true;
	cout << "라디오를 켰습니다." << endl;
}