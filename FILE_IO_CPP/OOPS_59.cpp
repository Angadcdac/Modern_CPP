//Class Template with multiple parameters
//Template increase the reusabilty of this code
#include<iostream>
using namespace std;
/*
 *Class templates with the multiple parameters
 template <class T1,class T2.........(comma seperator)>
 class nameofclass{
     //body
 
 }
 */
template <class T1 ,class T2>
class myclass{
	public :
		T1 data1;//example int data1 template allow all type of the data type
		T2 data2;//example int data2
		myclass(T1 a,T2 b)//constrctor
		{
			data1 = a;
			data2 = b;
		}
		void display(){
		   cout <<"Data1 == "<<this->data1<<endl;
		   cout <<"Data2 == "<<this->data2<<endl;
		}
};

int main(void)
{
	//all data type assingd to the class constructor
	//
	myclass <int ,char> obj1(1,'c');
	obj1.display();
	myclass <float ,float> obj2(1.2,3.4);
	obj2.display();
	myclass <int  ,int> obj3(12,32);
	obj3.display();
	myclass <float ,double> obj4(1.2,3.4);
	obj4.display();
	return 0;
}
