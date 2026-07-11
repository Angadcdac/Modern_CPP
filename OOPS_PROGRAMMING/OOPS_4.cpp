#include <iostream>
//learn static variable in class
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


};
int Employee :: count;//Take the memory at once time acutually the class get the memory after the creation of the object that is why we make the outsidde for the memory allocation first time
//default value is 0//without this it will give the error for the static variable
//int Employee :: count = 1000;//it can be updated by any number
int main()
{
	Employee harry ,rohan,lovish;//share the count static variable
//	harry.id = 1;//this is the private
//	harry.count =1;//this is the private
        harry.setData();
	harry.getData();
        
	rohan.setData();
	rohan.getData();
        
	lovish.setData();
	lovish.getData();
        return 0;

}
