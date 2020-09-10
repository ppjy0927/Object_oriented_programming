#include <iostream>

using namespace std;

/*
	동적 메모리 할당 : 프로그래머가 원하는 타이밍에 메모리를 할당하는 것.
	동적 메모리 해제 : 프로그래머가 원하는 타이밍에 메모리를 해제하는 것.
	
	new 연산자를 활용하여 메모리를 확보(할당)함.

	예> - 메모리 할당
		int* pA; // 포인터
		pA = new int; // new는 int형 크기(32bit)만큼 메모리를 확보한 다음, 확보(할당)한 메모리의 주소를 리턴함.
		*pA = 100; // 확보한 메모리에 값을 대입하여 활용함.

		- 메모리 해제 : 확보한 메모리가 더 이상 필요하지 않을 경우 해제를 해주는 것이 메모리의 낭비를 줄일 수 있음.
					  해제할 때는 delete 연산자를 이용해서 해제를 함.
		delete pA;
*/

int main() {
	/*
	int *pA;
	pA = new int;
	cout << "동적으로 메모리를 확보했습니다. 주소는 " << pA << "입니다." << endl;
	*pA = 150;
	cout << "동적으로 확보한 메모리에 대입된 값은 " << *pA << "입니다." << endl;
	delete pA;
	cout << "메모리가 해제되었습니다. 주소를 확인해보면 " << pA << "입니다." << endl;
	*/

	// 배열을 동적으로 확보하기
	// 포인터명 = new int[요소 개수];

	// 배열을 동적으로 해제하기
	// delete[] 포인터명;

	int num;
	int* pT;

	cout << "몇 명의 시험점수를 입력하겠습니까? " << endl;
	cin >> num;

	pT = new int[num];
	cout << num << "명의 점수를 입력하세요." << endl;
	
	for (int i = 0; i < num; i++) {
		cin >> pT[i]; // 포인터가 배열일 경우에만 대괄호를 쓸 수 있음
	}
	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 학생의 점수는 " << pT[j] << "입니다." << endl;
	}

	delete[] pT;
}