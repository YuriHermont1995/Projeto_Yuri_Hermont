#include<iostream>

class A{
	int A1;
	float A2;
	
	int getA1(){
		return A1;
	}
	float getA2(){
		return A2;
	}
	void setA1(int a){
		this.A1 = a;
	}
	void setA2(float a){
		this.A2 = a;
	}
	void MA1(){
		cout<<"MA1"<<endl;
	}
	void MA2(){
		cout<<"MA2"<<endl;
	}
}