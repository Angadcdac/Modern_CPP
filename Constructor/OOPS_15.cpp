//parameterized constrctor
#include <iostream>
using namespace std;
class Point{
	int x,y;
	//Complex (void); //it can not be private
	public:
	Point (int a, int b)
	{
	   x = a;
	   y = b;
	}
        void printNumber(void)
	{
		cout <<"the point is  "<<x <<" , "<<y<<endl;
	}

};
int main(void)
{
	//implicit call
	Point a(3,4);//implicit call to the parmeterized constrctor
	a.printNumber();

	//Explicit call
	Point b(5 ,7);
	b.printNumber();	
	return 0;
}
