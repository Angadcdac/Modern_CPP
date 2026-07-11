//Copy Constructor //Copy the constrctor 
#include<iostream>
using namespace std;
class Number{
	int a = 10;
	public:
	Number(){//default Constructor it is must in long program
	  a = 100;
	}

	Number(int num){
		a = num;
	}
	//Copy Constructor take parameter of the another object and copy as the same
        //the copy constructor can be commented if compliler does not get the the constructor
	//then it supplies its own copy constructor
	Number(Number &obj)
	{
	    cout<<"Copy Constrctor called"<<endl;
	    a = obj.a;
	}
	void display()
	{
              cout<<"The number of object is "<<a<<endl;
	}
};
int main(void)
{
	//If the default constrctor is not availble then it will give the error
	Number x(20),y,z(10),z2;
	x.display();
	y.display();
	z.display();

	//Copy constrctor make the copy of another object
	//z1 should exactly resemble z or x or y
        Number z1(x); //send the object x for being copied //You can comment the copy constructor then complier supply own constructor
        z1.display(); //it is the copy of x object
        z2 = z;//copy constructor not called
	z2.display();
	Number z3 = z; //copy constructor called
        z3.display();
	return 0;
}
