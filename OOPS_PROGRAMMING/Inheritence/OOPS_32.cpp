#include<iostream>
using namespace std;
class student{
//======================================================================================
	protected :
		int roll_no;
	public :
		void set_number(int a)
		{
		    roll_no = a;
		}
		void print_number(void)
		{
			cout<<"Your roll number is == : "<<roll_no<<endl;
		}
};
//======================================================================================
class Test :  public virtual student {
	protected:
		float maths,physics;
	public:
		void set_marks(float m1,float m2)
		{
		   maths = m1;
		   physics = m2;
		}
	        void print_marks(void)
		{
			cout<<"The result is here :"<<endl;
			cout<<"Maths :"<<maths<<endl;
			cout<<"Physics :"<< physics<<endl;
		}
};

//======================================================================================
class Sports : public  virtual student
{
	protected:
		float score;
	public:
		void set_score(float sc)
		{
			score = sc;
		}
	        void print_score(void)
	        {  
	             cout<<"Your PT score is == : "<<score<<endl;
	        }
};

//======================================================================================
class Result : public Test,public Sports{
	private:
		float total;
	public:
		 void display(void)
		 {
		    total = maths +  physics+ score;
	            print_number();
	            print_marks();
	            print_score();
	            cout<<"Your total score is : "<<total<<endl;	    
		 }
};
//======================================================================================
int main(void)
{
	Result angad;
	angad.set_number(4300);
	angad.set_marks(78.9,99.6);
	angad.set_score(8);
	angad.display();
	return 0;
}
