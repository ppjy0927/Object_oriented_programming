#include <iostream>

using namespace std;

class Number {
private:
	int val = 0;
public:
	void add(int val) {
		this->val += val; // this : Number class�� ������
		// ������ ���� ������ ȭ��ǥ ������(->)�� �����Ͱ� ����Ű�� ����� ������ �� ���
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