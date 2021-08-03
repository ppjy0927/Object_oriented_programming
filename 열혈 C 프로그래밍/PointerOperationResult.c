#include <stdio.h>
// int형 포인터를 대상으로 n 증가/감소      --->    n X sizeof(int) 의 크기만큼 증가/감소
// double형 포인터를 대상으로 n 증가/감소   --->    n X sizeof(double) 의 크기만큼 증가/감소

// arr[i] == *(arr+i)

// *(++ptr) = 20;	// ptr에 저장된 값 자체를 변경
// *(ptr+1) = 20;	// ptr에 저장된 값은 변경되지 않음
int main(void) {
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2); // 4가 증가하고 8이 증가함.
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); // 8이 증가하고 16이 증가함.

	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4가 증가
	ptr2++; // 8이 증가

	printf("%p %p \n", ptr1, ptr2);
	return 0;
}