//Initialization list in the constructor
#include<iostream>
using namespace std;

class Test{
	int num;
	int val;
	public :
//	Test(int i,int j):num(i),val(j)//initilization of a and b is here
//	Test(int i,int j):num(i),val(i+j)//initilization of a and b is here
//	Test(int i,int j):num(i),val(j)//initilization of a and b is here
//      Test(int i,int j):num(i),val(num+j)//a can be used for this
	Test(int i,int j) : val(j),num(i+val)//Give the garbage because a is initialized first
	{
	   cout<<"Constructor excuted "<<endl;
	   cout<<"Value of val is == "<<val<<endl;
	   cout<<"The value of num is == "<<num<<endl;
	}
};

int main(void)
{
    Test t(4,6);
    return 0;
}
