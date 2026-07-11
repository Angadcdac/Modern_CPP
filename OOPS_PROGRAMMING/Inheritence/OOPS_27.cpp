//multiple inheritence
//class Derived_class : visibility_mode base1 ,visibilty_mode base2 
#include <iostream>
using namespace std;
//===================================================================================
class base1{
	protected:
		int baseInt;
	public:
		void set_base_int1(int a)
		{
		      baseInt = a;
		}
};
//===================================================================================
class base2{
	protected:
		int baseInt2;
	public:
		void set_base_int2(int a)
		{
		      baseInt2 = a;
		}
};
//===================================================================================
class derived : public base1,public base2
{
	public :
		void show(){
		      cout <<"The value of base 1 is "<<baseInt<<endl;
		      cout <<"The value of base 1 is "<<baseInt2<<endl;
		      cout <<"The value of base 1 is "<<baseInt3<<endl;
		}

};
//=================================================================================== 
//The inherited derived class will be look something like this
//   base1Int  --> protected
//   base2Int  --> protected
//   Member function
//   set_base1_int() -- >public
//   set_base2_int() -- >public
//   set_show() -- >public
int main(void)
{
	derived angad;
	angad.set_base_int1(12);
	angad.set_base_int2(7);
	angad.show();
	return 0;

}
