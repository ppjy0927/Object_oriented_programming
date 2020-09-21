// 상수 객체를 반환하는 [] 연산자 오버로딩

#include <iostream>

using namespace std;
class Array {
	int *arr;
	int size;
	int capacity;

public:
	Array(int cap = 100) :arr(0), size(0), capacity(cap) {
		arr = new int[capacity];
	}
	~Array() { delete[] arr; }

	void Add(int data) {
		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const { return size; }

	int operator[](int idx) const { // 읽기만 가능한 const객체에 쓰임
		return arr[idx];
	}
	int& operator[](int idx) { // 변경해야 하는 경우 - 비const 필요함 // 읽기 쓰기 모두 가능한 비const객체에 쓰임
		return arr[idx];
	}
};

int main() {
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl << endl; // ar.operator[](int) 호출

	const Array& ar2 = ar;
	cout << ar2[0] << endl << endl; // ar.operator[](int) const 호출

	ar[0] = 100; // ar.operator[](int) 호출 // 값을 100으로 새로 넣어주기 - 비const 함수 호출
	//ar2[0] = 100; // const 객체니까 const함수만 호출해야함 -> const 함수는 내용 변경 불가능 -> 에러 발생
	
	return 0;
}