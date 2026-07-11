//Funtion object
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(void)
{
	//Function Object : Function wrappped in  a  class so that it available like in object
	int arr[] = {5,3,2,56,7,43,7,4};
        sort(arr,arr+5);//sort up to 5
        //sort(arr,arr+6,greater<int>());//sort up to 5//passess the greatr in object that is fucntion object
        //fucntion object known also as the functor
	for(int i = 0;i < 6; i++)
	{
	    cout<<arr[i]<<endl;
	}
	return 0;
}
