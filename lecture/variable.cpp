#include <iostream>

using namespace std;

/*
	����(Variable) : �����͸� �����ϴ� �޸� �����

	������ �����ϴ� ����
	
	---> " ������ ����Ÿ�� �����̸� "
	int a = 100;

	# ������ ����

	> ���������� : const constexpr --> ������ ������� ������ ��
	
	> ���������� : ������ �����͸� �а� ���� ����� �����ϴ� ������
		
		- volatile ������ : �����κ��� �����͸� �а� �� �� �޸� ���� ����� ������ �����͸� �����
		
		- static ������ : ������ Ư�� ���� ���� �����ϴ��� ���������� �ƴ� ��������ó�� ����� �����ϵ��� �ϴ� ������(��������)

		  ���ú���(��������) : �Լ� ȣ��� �Բ� �����ǰ� �Լ��� ��ȯ�� �� �����Ǵ� Ư¡�� ����
		
		  �������� : �Լ� ȣ��� �����ϰ� �������� ������� ������ �Լ�
	  
		- extern ������ : �ܺ� ���α׷��� ���� ���۵ǰ� �����ϵ� �������̳� ���̺귯�� ���� �����ϴ� ����
		
		[extern ��� ��]
			extern int x;
			--> exter "C++" int x �� ������ 
			--> "c++���� ���۵Ǿ� �����Ǵ� ����", "C++�� ���۵� �ܺ� ������Ʈ ���, ���̺귯�� ���� �����ϴ� ����" ��� �ǹ�
			--> ���� ������ ��ü ������ �ƴϱ� ������ �ʱ�ȭ�� �� ����

			extern "C" {extern int y;}
			--> "C���� ���۵� �ܺ� ������Ʈ ��� ���� ����"��� �ǹ�
			--> extern "C" int y �� ������

			extern "C" {int z;}
			--> ���� ����� �Բ� ���ǵ� �����μ� �ܺο��� ����� �� ����
			
	# ���� Ÿ�� 
	�������� ����ϴ� ������ Ÿ���� �ǹ�. 
	�����͸� �����ϴ� ��Ұ� �Ǽ��� �����ϴ� �������� ����ü �Ǵ� ���ڿ��� �����ϴ� ���������� �����ϱ� ���� �������� ���
	
	# ���� �̸� : ������ �����ϱ� ���� �̸�
		
		���� ����(�ϳ��� ���� ���𹮿��� ���� ���� ���� ���� -> �޸�(,) ���)
		int a = 0, b = 0;
		
		���� �ʱ�ȭ
		
		int a = 100; // �Ʒ��� ���ɰ� ����

		int a;
		a = 100;

		int a(100); // C++���� �ʱ�ȭ�ϴ� ���

		���� ������ ��

		int result = 0; // ���� Ÿ���� ���� ����

		double result = 10.3; // �Ǽ� Ÿ���� ���� ����

		auto name = "Seoul"; // name�� char Ÿ���� �迭�� �νĵ�

		int foo = 0;
		auto bbb = foo; // bbb ������ foo ������ ������ Ÿ������ �νĵ�

		decltype(foo) bbb; // bbb ������ foo ������ ���� Ÿ������ �νĵ�

		
		*** auto, decltype Ÿ���� �ʱ�ȭ�� ���� �ʰ� ����� �� ����
		auto address; // ���� �߻�

	# ���� ���� ��Ģ
		- ��ҹ��� ����
		- Ű���带 ���������� ����� �� ����(Ű����� ��ҹ��ڸ� �ٲٸ� ��� ����)
		- ���� �̸��� ù��° ���ڴ� �ݵ�� �Ϲݹ��ڳ� (_)�� ����ؾ� ��(����, $�� ���� Ư�����ڸ� ����� �� ����)
		- ù���� �������� �Ϲ� ���ڿ� ����, Ư�����ڸ� ����� �� ����
		- ���� ����ǥ(')�� ù���ڰ� �ƴϾ ����� �� ����
		- �ѱ۵� ��� ����

		ǥ��� : CamelCase, PascalCase
		CamelCase ---> backColor, firstName
		PascalCase ---> BackColor, FirstName
*/

int main() {
	int a34$ = 100;

	char ����;
	���� = 'a';

	long _Long;

	cout << a34$ << endl;
	cout << ���� << endl;
}