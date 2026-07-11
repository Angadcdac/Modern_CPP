//Array of object using pointer
#include<iostream>
using namespace std;
class shop{
	int id;
	float price;
	public:
	    void setData(int a , float b){
		    id = a;
		    price = b;
	    }
	    void getData(void){
		    cout <<"code of the item is == "<<id<<endl;
		    cout <<"price of the item is == "<<price<<endl;
	    }
};
int main (void)
{
     int size = 3,p,i,j;
     float q;
     shop *ptr = new shop[size];//create the 2 object dynamically having the size of complex
     shop *ptrtemp = ptr; //take the adress for start 
     
     for (i = 0;i < 3; i++)
     {
        cout<<"Id and price of item == "<<i+1<<endl;
	cout<<"Enter the ID of item == "<<endl;
	cin>>p;
	cout<<"Enter the price of item == "<<endl;
	cin>>q;
	ptr->setData(p,q);
	ptr++;
     }
     ptr = ptrtemp;//restoring the start address
     i = 0;
     for (j = 0;j < size; j++)
     {
        cout<<"item number== "<<i+1 <<endl;
	ptr->getData();
	ptr++;
     }
     return 0;
}
/*
    shop *ptr = new shop[size];
    Creating a dynamic array of objects of class 'shop'.

    'ptr' is a pointer of type shop.

    'new shop[size]' creates 'size' number of
    shop objects in HEAP memory.

    Memory is allocated dynamically at runtime.

    The base address of the first object is
    stored in pointer 'ptr'.

    Objects can be accessed using:
        ptr[0]
        ptr[1]
        ptr[2]
        ...

    Important:
    Since memory is allocated using new[],
    it must be released using delete[].

    Example:
        delete[] ptr;
*/


