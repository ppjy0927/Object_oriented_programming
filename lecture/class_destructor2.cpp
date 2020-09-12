#include <iostream>

using namespace std;

class DynamicArray {
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) {
	// 동적으로 메모리를 할당
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray() {
	// 메모리 해제
	delete[] arr;
	arr = NULL; // 해제한 뒤 엉뚱한 주소값을 가리키지 않도록 하기 위해 null값을 넣어줌
	cout << " 메모리가 해제되었습니다." << endl;
}

int main() {
	// 몇 개의 배열의 요소를 정할 지 입력받는다.
	int size;
	cout << "배열의 요소의 갯수를 정할 정수를 입력하세요 : ";
	cin >> size;

	DynamicArray dArr(size);

	for (int i = 0; i < size; ++i)
		cin >> dArr.arr[i];

	for (int i = size - 1; i >= 0; --i)
		cout << dArr.arr[i] << " ";

	cout << endl;

	//int* ptr;
	//ptr = new int[10]; // int형 배열 10개 크기의 메모리를 확보 (4 * 10 = 40byte)
} // } 직전에 ~DynamicArray가 호출됨. 따라서 동적으로 할당된 메모리가 자동으로 해제됨.