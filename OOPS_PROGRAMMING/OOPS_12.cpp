#include <iostream>
using namespace std;
//Friend function
class c2;
class c1{
	int data;
	friend void swap(c1 &  ,c2 &);//It can be write in the protected access also
        //friend void swap(c1 a , c2 b) //copy by value
	public:
	void setData(int value)
	{
	   data = value;
	};
	void printData(void)
	{
	  cout<<"The data =="<< data <<endl;
	}
};

class c2{
	int num;
        friend void swap(c1 &, c2 &);
        //friend void swap(c1 &a , c2 &b) //copy by value
	public:
	void setData(int value)
	{
	   num = value;
	};
	void printData(void)
	{
	  cout<<"The num is =="<< num <<endl;
	}
};

//void swap(c1 a , c2 b)//call by value i will not change the original data give 
void swap(c1 &a , c2 &b)
{
	int temp = a.data;
	a.data = b.num;
	b.num = temp;
}
int main(void)
{
	c1 a;
	a.setData(3);

	c2 b;
	b.setData(4);
        
	swap(a,b);//swap the object member
	cout <<"the data is of a ==";
	a.printData();
	cout<<"the data of b is == ";
	b.printData();
	return 0;
}
