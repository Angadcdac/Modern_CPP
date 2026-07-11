//Vector in C++  STL
//"CPP vector methods" check on the google	
//Here is th lot of method omn google you can use it 
#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
	cout<<"Displaying the vector"<<endl;
	for(int i =0; i < v.size(); i++)
	{
	    cout <<v[i]<<" ";	
	   // cout <<v.at(i)<<" ";	
	}

}
int main(void)
{
	int element,size;	
	vector<int> vec1;//Zero length vector
	vector<char> vec2(4);//4 size vector	
	//vector<int> vec3(vec2);//4 element vector from vec2
	//vector<int> v(6,3);//6 element vector of 3s
	//display(vec1);// Emty 0 size 
	//display(vec2);// 
	return 0;
}
