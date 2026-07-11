//destroy the object after finish the work
//destructor //free the memory of the object//called automatically
#include <iostream>
using namespace std;
//Destructor never takes as argument not does it return the value
int count = 0;
class num{
	public:
		num(){
			count++;
        		cout<<"This is the time when constructor is called for object number"<<count<<endl;
		}
		~num(){
		    cout<<"Distructor called for the object number == "<<count<<endl;
		    count--;
		}
		void show()
		{
		  cout<<"call the show for checking"<<endl;
		}


};
int main (void)
{
	cout<<"We are inside our main function"<<endl;
	cout<<"Creating the first object"<<endl;
	num n1;
	{
		cout<<"Entering the block"<<endl;
		cout<<"craeting the two more object"<<endl;
		num n2,n3;
		cout<<"Exiting the block"<<endl;
	}
	cout<<"back to main"<<endl;
	n1.show();
//	n2.show();//it will give the error because the object has been destroyed in the block
//	n3.show();
	return 0;
}
