//Function template and function template with parameter 
#include<iostream>
using namespace std;
template <class T1 ,class T2>
float  average(T1 num1, T2 num2)
{
	int c = (num1+num2)/2;
	return c;
}
int main(void)
{
	float result = average(34,54);
	cout <<"The result of the average is == "<<result<<endl;
        result = average(34.56,54.56);
	cout <<"The result of the average is == "<<result<<endl;
	result = average('3',54.56);
	cout <<"The result of the average is == "<<result<<endl;
	return 0;
}
