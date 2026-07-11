//Observe the order of the constructor execute
#include<iostream>
using namespace std;
class Base1{
	int data;

	public:
	Base1(int i){
		data = i;
		cout <<"Base1 class constructor callled"<<endl;
	}
	void printdata_Base1(void)
	{
	        cout<<"The data1 is == "<<data<<endl; 
	}	
};
//===================================================================
class Base2{
	int data2;

	public:
	Base2(int i){
		data2 = i;
		cout <<"Base2 class constructor callled"<<endl;
	}
	void printdata_Base2(void)
	{
	        cout<<"The data2 is == "<< data2 <<endl; 
	}	
};
//=====================================================================
class Derived : public Base1 ,public Base2{
	int derived1,derived2;
	
	public:
	Derived(int a ,int b,int c,int d) : Base1(a),Base2(b){
		derived1 = c;
		derived2 = d;
		cout<<"Derived class constructor called"<<endl;
	}
	void printdata_derived(void)
	{
	        cout<<"The value of the derived 1 == "<< derived1 <<endl;
	        cout<<"The value of the derived 2 == "<< derived2 <<endl;

	}	
};
int main(void)
{
	Derived harry(1,2,3,4);
	harry.printdata_derived();
	harry.printdata_Base1();
	harry.printdata_Base2();
	return 0;

}
