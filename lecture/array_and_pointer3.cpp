#include <iostream>

/*
	포인터에 [] 연산자 사용하기
	[] : 첨자연산자(subscript operator)

	포인터에 []를 배열처럼 표기하기
	int *ptr;
	ptr[2]; // 포인터 ptr이 가리키는 요소에서부터 두 칸 뒤의 요소를 가리킴

	위의 방법은 포인터가 배열을 가리킬 때만 사용 가능함
*/

using namespace std;

double avg(int *ptr) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		//sum += *(ptr + i); 대신 밑의 코드를 쓸 수 있음.
		sum += ptr[i];
	}
	return sum / 5;
}

int main() {
	int test[5];
	cout << "5명의 시험 점수를 입력하세요." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double res = avg(test); // 배열이 일종의 포인터 역할을 해줌, test == &test[0]
	cout << "5명의 평균 점수는 " << res << "입니다." << endl;
}