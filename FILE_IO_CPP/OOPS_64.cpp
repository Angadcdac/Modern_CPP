//Member function template and overloading template function
#include<iostream>
using namespace std;
template <class T> 
class Harry{
	public:
	T data;
	Harry(T a)
	{
	  data = a;
	}
	void display(void);
};
template <class T>
void Harry<T> :: display(void)
{
	cout<< data<<endl;

}
void func1(int a)
{
    cout<<"Normal function a == "<<a<<endl;
}
template<class T>
void func1(T a)
{
   cout<<"This is the templatized function value of a == "<<a<<endl;
}
int main(void)
{
	/*
	Harry<int> h(5);
        cout<<h.data<<endl;
	
	Harry<float> g(5.6);
        cout<<g.data<<endl;
	g.display();	
	return 0;
	
	
	Harry<int> h(87);
	h.display();
	*/
	func1(4);//exact match is the highest priority//call the normal function
	func1(34.40);//template function called
}
