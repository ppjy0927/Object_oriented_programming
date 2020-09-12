#include <iostream>

using namespace std;

class DynamicArray {
public:
	int* arr;

	DynamicArray(int arraySize);
	~DynamicArray();
};

DynamicArray::DynamicArray(int arraySize) {
	// �������� �޸𸮸� �Ҵ�
	arr = new int[arraySize];
}

DynamicArray::~DynamicArray() {
	// �޸� ����
	delete[] arr;
	arr = NULL; // ������ �� ������ �ּҰ��� ����Ű�� �ʵ��� �ϱ� ���� null���� �־���
	cout << " �޸𸮰� �����Ǿ����ϴ�." << endl;
}

int main() {
	// �� ���� �迭�� ��Ҹ� ���� �� �Է¹޴´�.
	int size;
	cout << "�迭�� ����� ������ ���� ������ �Է��ϼ��� : ";
	cin >> size;

	DynamicArray dArr(size);

	for (int i = 0; i < size; ++i)
		cin >> dArr.arr[i];

	for (int i = size - 1; i >= 0; --i)
		cout << dArr.arr[i] << " ";

	cout << endl;

	//int* ptr;
	//ptr = new int[10]; // int�� �迭 10�� ũ���� �޸𸮸� Ȯ�� (4 * 10 = 40byte)
} // } ������ ~DynamicArray�� ȣ���. ���� �������� �Ҵ�� �޸𸮰� �ڵ����� ������.