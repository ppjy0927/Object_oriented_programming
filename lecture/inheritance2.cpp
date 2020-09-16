#include <iostream>

/*
	상속 시 접근 지정자 설정에 따른 접근 가능한 경우 

	| 기본클래스(부모클래스) | --- |  상속방법  | --- |  파생클래스(자식클래스)  | --- |  클래스 외부  |
		  public			  	  public				접근가능					 접근가능
		  protected										접근가능					 접근불가능
		  private										접근불가능				 접근불가능

		  public			  	  protected				접근가능					 접근불가능
		  protected										접근가능					 접근불가능
		  private										접근불가능				 접근불가능

		  public			  	  private				접근가능					 접근불가능
		  protected										접근가능					 접근불가능
		  private										접근불가능				 접근불가능
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

		// 부모 멤버에 접근하는 애
		//n = priv; // 에러발생
		n = protec; // 접근가능
		n = pub; // 접근가능
	}
};

int main() {
	Parent pa;
	int n;

	//n = pa.priv; // 접근불가
	//n = pa.protec; // 접근불가
	n = pa.pub; // 접근가능

	Child ch;
	//n = ch.priv; // 접근불가
	//n = ch.protec; // 접근불가
	//n = ch.pub; // 접근불가
}