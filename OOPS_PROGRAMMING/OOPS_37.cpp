//Pointer to object and arrow operartot in c++
#include<iostream>
using namespace std;
class Complex {
	int real,imag;
	public:
	      void getData(){
	           cout<<"The real data is =="<<real<<endl;
	           cout<<"The imaginary data is =="<<imag<<endl;
	      }
	      void setData(int a, int b)
	      {
	          real = a;
		  imag =  b;
	      }
};
int main(void)
{	
	Complex c1;
      //  c1.setData(3,6);
      // c1.getData();
      /* 
       Complex *ptr = &c1;
       (*ptr).setData(1,24);
       (*ptr).getData();//class work as struct mix data that is why it working with the pointer
       
       */
	/*
	
	Complex *ptr = new Complex;
	(*ptr).setData(2,3);
	(*ptr).getData();
         
	*/
	/*
	  'new Complex' dynamically creates an object
    of class Complex in HEAP memory*/
	/*
	//it is exactly same as the above
	//very importent
	Complex *ptr = new Complex; 
	ptr->setData(1,3);     
        ptr->getData();
	delete[] ptr;
	*/

	//Array of the objects
	Complex *ptr = new Complex[4];//Array of the objects
	ptr->setData(1,3);
	ptr->getData();
	ptr++;//go to the next object
	ptr->setData(2,3);
	ptr->getData();
	ptr--;
	ptr->getData();//checked the first 
        delete[] ptr;//delete all the object
	ptr->getData();//checked the first 
        return 0;
}











