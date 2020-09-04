#include <iostream>

using namespace std;

int main() {
	const int subject = 2;
	const int num = 5;

	int test[subject][num] = { {80, 90, 100, 70, 60}, {90, 90, 88, 87, 78} }; // 다차원 배열 초기화할 때 중괄호를 쓰면 좀 더 편리함

	/*test[0][0] = 80;
	test[0][1] = 90;
	test[0][2] = 100;
	test[0][3] = 70;
	test[0][4] = 60;
	test[1][0] = 90;
	test[1][1] = 90;
	test[1][2] = 88;
	test[1][3] = 87;
	test[1][4] = 78;*/

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 사람의 국어 점수는 " << test[0][i] << "입니다." << endl;
		cout << i + 1 << "번째 사람의 수학 점수는 " << test[1][i] << "입니다." << endl;

	}
}