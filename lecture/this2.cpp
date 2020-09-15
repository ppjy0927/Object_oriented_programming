#include <iostream>

using namespace std;

class Number {
private:
	int val = 0;
public:
	void add(int val) {
		this->val += val; // this : Number class의 포인터
		// 포인터 다음 나오는 화살표 연산자(->)는 포인터가 가리키는 멤버에 접근할 때 사용
	}
	int getVal() {
		return this->val;
	}
};

int main() {
	Number number;
	number.add(10);
	int val;
	val = number.getVal();
	cout << val << endl;
}