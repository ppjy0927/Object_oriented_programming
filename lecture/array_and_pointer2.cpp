#include <iostream>

/*
	포인터를 인수로, 배열을 인수로 사용
*/

using namespace std;

//인수에 배열
/*
double avg(int t[]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}
*/

//인수에 포인터
double avg(int *ptr) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += *(ptr + i);
	}
	return sum / 5;
}

int main() {
	// 배열
	/*
	int test[5];
	cout << "5명의 시험 점수를 입력하세요." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test);
	cout << "5명의 평균 점수는 " << res << "입니다." << endl;
	*/

	// 포인터
	int test[5];
	cout << "5명의 시험 점수를 입력하세요." << endl;
	
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test); // 배열이 일종의 포인터 역할을 해줌, test == &test[0]
	cout << "5명의 평균 점수는 " << res << "입니다." << endl;
}