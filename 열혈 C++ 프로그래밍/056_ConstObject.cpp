// 06-1 : const�� ������ ������ �̾߱�

#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n) {}
	SoSimple Addnum(int n) {
		num += n;
		return *this;
	}
	void ShowData() const {
		cout << "num: " << num << endl;
	}
};

int main(void) {
	const SoSimple obj(7);
	//obj.Addnum(20);
	obj.ShowData();
	return 0;
}