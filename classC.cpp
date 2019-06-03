#include<iostream>
class C{
	string C1;
	int C2;
	
	string getC1(){
		return C1;
	}
	int getC2(){
		return C2;
	}
	void setC1(string a){
		this.C1 = a;
	}
	void setC2(int a){
		this.C2 = a;
	}
	void MC1(){
		cout<<"MC1"<<endl;
	}
	void MC2(){
		cout<<"MC2"<<endl;
	}
	void MC3(){
		cout<<"MC3"<<endl;
	}
}
