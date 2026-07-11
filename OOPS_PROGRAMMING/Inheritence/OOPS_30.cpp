//Abbiguity solve
#include<iostream>

using namespace std;
class Base1{
	public:
	void greet(void)//same as the Base2 class function
	{
		cout<<"How are you"<<endl;
	}
};
class Base2{
	public:
        void greet(void)//same as the Base 1 class function give the error while calling
	{
		cout<<"Kaise ho"<<endl;
	}
};

class derived:public Base1,public Base2{
	public:
	int a;
	void greet(void)
	{
		Base1::greet();//it will give the indication that if the call derived from the 
			       //derived class then the Base1 function greet will be called if you 
			       //remove it then it give the abuguity error
	}
};
class  B{
	public:
		void say(){
			cout<<"Hello world"<<endl;
		}
};

class  D : public B
{
	int a;
	public:
	/*void say(){//if uncomment then it will be called
		cout<<"Hello this is from the B"<<endl;
	}*/
};
int main(void)
{

//	Base1 base1obj;
//	Base2 base2obj;
//	base1obj.greet();
//	base2obj.greet();
	derived der;
        der.greet();//without declaration in the derived class then it will give the error	
        B b;
	b.say();
	D d;
	d.say();
}
