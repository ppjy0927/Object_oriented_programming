#include <iostream>

using namespace std;

int main() {
	const int num = 5;

	int test[num];

	cout << num << "명의 점수를 입력하세요!!" << endl;
	
	for (int i = 0; i < num; i++) {
		cin >> test[i];
	}

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 사람의 점수는 " << test[i] << "입니다." << endl;
	}
}