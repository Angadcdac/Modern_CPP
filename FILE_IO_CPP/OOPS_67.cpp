//Vector in C++  STL
//"CPP vector methods" check on the google	
//Here is th lot of method omn google you can use it 
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
	for(int i =0; i < v.size(); i++)
	{
	    cout <<v[i]<<" ";	
	    cout <<v.at(i)<<" ";	
	}

}
int main(void)
{
	int element,size;	
	vector<int> vec1;//Zero length vector
	cout<<"Enter the size of vector"<<endl;
	cin>>size;
	for (int i =0;i < size; i++)
	{
	     cout<<"Enter an element to add this vector"<<endl;
	     cin>>element;
	     vec1.push_back(element);
	}	
	//display(vec1);
	//Make the iterator
	vector<int>::iterator iter = vec1.begin();
	vec1.insert(iter, 566); 
	//vec1.insert(iter+1, 566);//add at the place of 2 
	vec1.insert(iter,5, 566);//Add the 5 copy of 
	display(vec1);
	return 0;
}
