#include <iostream>
//learn static variable in class//static variable is the class associated
using namespace std;
class Employee{
	int id = 10; //possible;
        //int static count = 1000;//Gives the error
	//int count = 0;//static variable
        int static count;//it is the class variable that is the property of class it is the update eveery time while accessing it and contain the previos data 
   	public :
	     void setData(void){
		cout <<"Enter the ID"<<endl;
        	cin>>id;
		count++;
	}
	void getData(void){
		cout<<"the ID of emplyee is == "<< id<<endl;
		cout<<"This is the employee number == "<<count;
	}
	//This is the static member function for access the static member data type like count
	//you can not access the non static data member in the static function
	static void getCount(void)
	{   

               // cout<<id; //Can not access the non staic varible in static function//throw the error
		cout<<"The value of count is "<<count<<endl;
	
	}

};
int Employee :: count;
int main()
{
	Employee harry ,rohan,lovish;//share the count static variable
//	harry.id = 1;//this is the private
//	harry.count =1;//this is the private
        harry.setData();
	harry.getData();
	Employee::getCount();
	rohan.setData();
	rohan.getData();
	Employee::getCount();
        
	lovish.setData();
	lovish.getData();
	Employee::getCount();
        return 0;

}
