#include <iostream>
#include <iomanip>
using namespace std;
//Boolian Douoble char flaot
int main(void)
{
	bool a = 1;
	float b = 4.5;
	char c = 45;
	double d = 434389.68;
	cout <<"The bool   a is == "<< a<<endl;
	cout <<"The flaot  b is == "<< b<<endl;
	cout <<"The char   c is == "<< c<<endl;//it will print the asccii 
	cout <<"The char   c is == "<< (int)c<<endl;//it will print the asccii 
        cout << "The ASCII value of c is == " << static_cast<int>(c) << endl;
	cout <<"The double d is == "<<d<<endl;//print only the value not float 
        double k = 3.141592653589793;
        cout << fixed << setprecision(15);
        cout << "The double d is == " << k << endl;
	return 0;
}
