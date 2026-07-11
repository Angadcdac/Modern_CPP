#include <iostream>
using namespace std;
class Y;//forword declaration
class X{
	int data; 
	public:
	void setValue(int value){
		data = value;
	}
	friend void add(X,Y);//common friend function that is uisng 2 class objects
};
class Y{
	//int data;
	int num;
	public:
	void setValue(int value)
	{
	    num = value;
	}
	friend void add(X,Y);
};
void add (X o1,Y o2)//it is using 2 object of sepearate class
{
	cout << "Summing the data of X and Y objects"<<o1.data+o2.num;

}

int main(void)
{
	X a1;
	a1.setValue(4);

	Y b1;
	b1.setValue(3);
	
	add(a1,b1);
	return 0;

}
