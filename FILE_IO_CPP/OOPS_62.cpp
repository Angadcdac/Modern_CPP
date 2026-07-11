//Function template and function template with parameter 
#include<iostream>
using namespace std;
template <class  T>
void swap__(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

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

	int a = 4,b = 7;
	swap__(a,b);//swap the data using the swap function
	printf("a === %d\n",a);//You can use the printf in cpp it will not give any error
	printf("b === %d\n",b);
	return 0;
}
