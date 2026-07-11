//Constructor with default arguments 
#include <iostream>
using namespace std;

class Simple{
	int data1;
	int data2;
	public://Constructor allways will be int hte public
	Simple(int a ,int b = 9)//If user does not provide the value of b then it will take the default val
	{
		data1 = a;
		data2 = b;
	}
	void printData();
};
void Simple::printData(void)//member fucntion calling can access the private data member 
{
  cout<<"The value of data1 is == "<<data1<<"The value of data2 == "<<data2<<endl;

}
int main(void)
{
//	Simple s(1,4);
	Simple s(1);
	s.printData();
	return 0;
}
