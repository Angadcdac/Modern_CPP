//Netested of member function
#include<iostream>
#include<string>
using namespace std;
class  binary{
	private:
	      string s;
	  //    void checkbin(void);
	public:
              void read(void);
	      void checkbin(void);
	      void ones(void);
	      void display(void);
};
void binary::read(void)
{
	cout<<"Enter the binary nubmer";
	cin>>s;
}
void binary :: checkbin(void)
{
	int i{0};
	cout<<"Checking your binary number"<<endl;
	for(i = 0;i < s.length(); i++)
	{
		if(s.at(i) != '0'&& s.at(i) != '1')//check the index for binary
		{
			cout<<"Incorrect binary format"<<endl;
			exit(0);
		}
		
	}
}
void binary :: ones(void)
{
	checkbin();//Do not need to create object and call this the nested calling
	cout<<"Converting in the 2'S complement"<< endl;
	for(int i = 0; i < s.length(); i++)
	{
	   if(s.at(i) == '0')
	   {
              s.at(i) = '1';
	   }
	   else if(s.at(i) == '1')
	   {
	      s.at(i) = '0';
	   }
	}
}
void binary::display(void)
{
	cout<<"display the binary number"<<endl;
	for(int i = 0;i < s.length();i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}
int main(void)
{
	//Classes and object
	//class is the extention of the structure
	//By default the member of class is private
	//the class data can be public ,private ,and protected
	//struct members are public low data security
	//in struct can not create function or member
	//class can have method and properties
	//structes in c++ typedefed
	//you can declare objects along with the class declaration
        /*
	 class Employee
	 {
	   int a;
	 }obj1,obj2,obj3;*/
	//if int a is private you can not access it as obj1.a;
	
	//Nesting of member function
        binary b;
        b.read();	
	//b.checkbin();
	b.ones();
	b.display();
	return 0;

}
	//Classes and object
	//class is the extention of the structure
	//By default the member of class is private
	//the class data can be public ,private ,and protected
	//struct members are public low data security
	//in struct can not create function or member
	//class can have method and properties
	//structes in c++ typedefed
	//you can declare objects along with the class declaration
        /*
	 class Employee
	 {
	   int a;
	 }obj1,obj2,obj3;*/
	//if int a is private you can not access it as obj1.a;
	
	//Nesting of member function

