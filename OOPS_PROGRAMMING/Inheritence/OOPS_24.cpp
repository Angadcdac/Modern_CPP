//Single Inheritence
#include<iostream>
using namespace std;
//====================================================================================
class base{
	int data1; //private by default can not inherit//we can get the value of data1 by below getedata function
        public:
	int data2;
	void setData();
	int getData1();
	int getData2();

};
void base :: setData(void)
{
	data1 = 10;
	data2 = 20;
}

int base :: getData1(){//for inherit the private data
   return data1;
}

int base :: getData2(){
   return data2;
}
//=====================================================================================
class derived:private base//class is derived publically
{
	//All public member of the base class will be private for this
	int data3;
	public:
	void process();
	void display();
};
void derived :: process()
{
	setData();//We can call the base class setData()because that is the private
	data3 = data2 * getData1();
}
void derived :: display(){
	cout<<"value of data 1 is == "<<getData1()<<endl;
	cout<<"value of data 1 is == "<<data2<<endl;
	cout<<"value of data 1 is == "<<data3<<endl;
}
//========================================================================================
int main(void)
{
	derived der;
//	der.setData(); //can not direct call the setData because it is the private it can be called only within member function
	der.process();
	der.display();
        return 0;
}
