#include <iostream>

/*
	��� �� ���� ������ ������ ���� ���� ������ ��� 

	| �⺻Ŭ����(�θ�Ŭ����) | --- |  ��ӹ��  | --- |  �Ļ�Ŭ����(�ڽ�Ŭ����)  | --- |  Ŭ���� �ܺ�  |
		  public			  	  public				���ٰ���					 ���ٰ���
		  protected										���ٰ���					 ���ٺҰ���
		  private										���ٺҰ���				 ���ٺҰ���

		  public			  	  protected				���ٰ���					 ���ٺҰ���
		  protected										���ٰ���					 ���ٺҰ���
		  private										���ٺҰ���				 ���ٺҰ���

		  public			  	  private				���ٰ���					 ���ٺҰ���
		  protected										���ٰ���					 ���ٺҰ���
		  private										���ٺҰ���				 ���ٺҰ���
*/

using namespace std;

class Parent {
private:
	int priv;
protected:
	int protec;
public:
	int pub;
};

class Child : protected Parent {
public:
	void AccessParents() {
		int n;

		// �θ� ����� �����ϴ� ��
		//n = priv; // �����߻�
		n = protec; // ���ٰ���
		n = pub; // ���ٰ���
	}
};

int main() {
	Parent pa;
	int n;

	//n = pa.priv; // ���ٺҰ�
	//n = pa.protec; // ���ٺҰ�
	n = pa.pub; // ���ٰ���

	Child ch;
	//n = ch.priv; // ���ٺҰ�
	//n = ch.protec; // ���ٺҰ�
	//n = ch.pub; // ���ٺҰ�
}