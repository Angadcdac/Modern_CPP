//Class Template with multiple parameters
#include<iostream>
using namespace std;
/*
 template <class T1,class T2>
 class nameofclass{
     //body
 
 }
 */
template <class T1 ,class T2>
class myclass{
	public :
		T1 data1;//example int data1
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
	myclass <int ,char> obj(1,'c');
	obj.display();
	return 0;
}
