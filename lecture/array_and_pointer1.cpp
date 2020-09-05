#include <iostream>

/*
	배열 이름은 배열 첫번째 요소의 주소를 저장하는 포인터 같은 기능을 가짐
	
	test = &test[0]
	*test = test[0]

	따라서 배열명을 배열 첫번째 요소를 가리키는 포인터로 사용할 수 있음

	[포인터 연산]
	+ : p + 1
	- : p - 1, p1 - p2(p1과 p2 사이의 존재하는 요소의 개수의 차이를 구함)
	++ : p++
	-- : p--
*/

using namespace std;

int main() {
	int arr[4] = {1, 2, 3, 4};
	int *ptr;
	int *ptr1;
	ptr = arr;
	ptr1 = &arr[3];

	int test[5] = {80, 70, 90, 88, 100};

	cout << "test[0] 요소의 값은 " << test[0] << "입니다." << endl;
	cout << "*test의 값은 " << *test << "입니다." << endl;

	cout << "test[0]의 주소값은 " << &test[0] << "입니다." << endl;
	cout << "test의 값은 " << test << "입니다." << endl;
	
	cout << "(test + 1)의 값은 " << test + 1 << "입니다." << endl;
	cout << "&test[1]의 값은 " << &test[1] << "입니다." << endl;

	cout << "test[1]의 값은 " << test[1] << "입니다." << endl;
	cout << "*(test + 1)의 값은 " << *(test + 1) << "입니다." << endl;
	// test++ 는 배열이기 때문에 에러 --> 포인터 연산이 적용되지 않음

	cout << "arr의 값은 " << arr << "입니다." << endl;
	cout << "&arr[0]의 값은 " << &arr[0] << "입니다." << endl;
	cout << "ptr의 값은 " << ptr << "입니다." << endl;

	cout << "(ptr + 1)의 값은 " << ptr + 1 << "입니다." << endl;
	cout << "(arr + 1)의 값은 " << arr + 1 << "입니다." << endl;
	cout << "&arr[1]의 값은 " << &arr[1] << "입니다." << endl;
	cout << "++ptr의 값은 " << ++ptr << "입니다." << endl; // 포인터에서는 ++연산이 적용됨 --> 포인터를 그 다음 포인터로 이동시킴 
	cout << "ptr의 값은 " << ptr << "입니다." << endl;

	cout << "ptr1의 값은 " << ptr1 << "입니다." << endl;
	cout << "(ptr - ptr1)의 값은 " << ptr - ptr1 << "입니다." << endl; // 요소의 차이값 : -2 <-- 위에서 ++ptr 연산으로 arr[1]를 가르킴
	cout << "*ptr1의 값은 " << *ptr1 << "입니다." << endl; // 현재 ptr1 포인터 위치의 요소

	cout << "*(--ptr1)의 값은 " << *(--ptr1) << "입니다." << endl;
}