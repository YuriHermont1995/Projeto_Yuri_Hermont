#include<iostream>
class B{
	int B1;
	float B2;
	
	int getB1(){
		return B1;
	}
	float getB2(){
		return B2;
	}
	void setB1(int a){
		this.B1 = a;
	}
	void setB2(float a){
		this.B2 = a;
	}
	void MB1(){
		cout<<"MB1"<<endl;
	}
	void MB2(){
		cout<<"MB2"<<endl;
	}
}