//Multilevel inheritence
#include <iostream>
using namespace std;
//=========================================================================
class Student{
	protected :
		int roll_number;
	public:
		void set_roll_number(int);
		void get_roll_number(void);

};
void Student :: set_roll_number(int r){
         roll_number = r;
   
}
void Student :: get_roll_number(void)
{
	cout<<"The roll number is == "<<roll_number<<endl;

}
//=========================================================================
class Exam : public Student
{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float,float);
		void get_marks(void);
};
void Exam :: set_marks(float m1,float m2)
{
	maths = m1;
	physics = m2;
}
void Exam :: get_marks(void)
{
	cout << "The marks obtain in the maths == "<<maths<<endl;
	cout << "The marks obtain in the phtsics == "<<physics<<endl;
}
//=========================================================================
class Result : public Exam{
	float percentage;
	public:
            void display_result(void)
            {
               get_roll_number();
	       get_marks();
               cout<<"Your percentage is == "<<(maths+physics)/2<<endl;
            }
};
//=========================================================================
int main(void)
{
     /*
      *1. if we are inheriting from A --> B --->C
       2. A is the base class of B and B is the base class of C
       3.ABC is called is inheritence path
     */
     Result angad;
     angad.set_roll_number(420);
     angad.set_marks(89.4,91.6);
     angad.display_result();
     return 0;
}

