// ��� ��ü�� ��ȯ�ϴ� [] ������ �����ε�

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

	int operator[](int idx) const { // �б⸸ ������ const��ü�� ����
		return arr[idx];
	}
	int& operator[](int idx) { // �����ؾ� �ϴ� ��� - ��const �ʿ��� // �б� ���� ��� ������ ��const��ü�� ����
		return arr[idx];
	}
};

int main() {
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl << endl; // ar.operator[](int) ȣ��

	const Array& ar2 = ar;
	cout << ar2[0] << endl << endl; // ar.operator[](int) const ȣ��

	ar[0] = 100; // ar.operator[](int) ȣ�� // ���� 100���� ���� �־��ֱ� - ��const �Լ� ȣ��
	//ar2[0] = 100; // const ��ü�ϱ� const�Լ��� ȣ���ؾ��� -> const �Լ��� ���� ���� �Ұ��� -> ���� �߻�
	
	return 0;
}