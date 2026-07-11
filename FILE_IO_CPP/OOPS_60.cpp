//Class tempelate with the default parameter
//I found crazy moment with the template
//this is the example of the class template
#include<iostream>
using namespace std;
template  <class  T1 = int ,class T2 = float , class T3 = char>
class harry{
	public:
		T1 a;
		T2 b;
		T1 c;
		harry(T1 data1,T2 data2,T3 data3)
		{
			a = data1;
		        b = data2;
			c = data3;
		}
		void display(void)
		{
			cout <<"The value of  a== "<<a<<endl;
			cout <<"The value of  b== "<<b<<endl;
			cout <<"The value of  c== "<<c<<endl;
		}
};

int main(void)
{
	harry h(4,6.4,'k');
	h.display();
	harry <float,char ,char> g(1.4,'j','l');
	g.display();
	harry <int ,char ,int> d(1,'j',7);
	d.display();
	return 0;
}
