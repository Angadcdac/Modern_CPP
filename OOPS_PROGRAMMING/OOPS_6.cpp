//Array of objects
#include<iostream>
using namespace std;
class Employee
{
	int id;
	int salary;
	public:
	void setId(void){
		salary = 122;
		cout<<"Enter the id of Employee";
		cin>>id;
	}
	void getId(void){
		cout<<"The id of the employee is == "<<id<<endl;
	}
};
int main()
{
//	Employee harry ,rohan,lovish,shruti;
	//Array of class
	Employee fb[4];//make the array of object and access each member with the object
	for(int i = 0;i < 4;i++)
	{
		fb[i].setId();
		fb[i].getId();
	
	}



}
