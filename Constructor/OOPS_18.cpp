//Dynamic Initializatoin of object using Constructor and invoke after the user enter the vlaue
#include <iostream>
using namespace std;
class BankDeposit{
	int principal;
	int years;
	float interest_rate;
	float returnvalue;
	public:
	//it is importent to give the default value 
	BankDeposit(){}//if comment then it will give error during the constructior initilazation
	BankDeposit(int p,int y,float r);//r can be float
	BankDeposit(int p,int y,int r);//r can be float
	void show(void);
};
BankDeposit::BankDeposit(int p,int y,float r)
{
	cout<<"Constructor 1"<<endl;
	principal = p;
	years = y;
	interest_rate = r;
	returnvalue = principal;
	for(int i = 0;i < y;i++)
	{
		returnvalue = returnvalue*(1+interest_rate);
	}
}
BankDeposit::BankDeposit(int p,int y,int r)
{
        cout<<"Constructor 2"<<endl;
	principal = p;
	years = y;
	interest_rate = float(r)/100;
	returnvalue = principal;
	for(int i = 0;i < y;i++)
	{
		returnvalue = returnvalue*(1+interest_rate);
	}
}

void BankDeposit:: show(void)
{
	cout << endl << "Pricipal ammount was == "<<principal
		<<" return value after years == "<<years
		<<" return value is == "<<returnvalue<<endl;


}
int main(void)
{
	BankDeposit bd1,bd2,bd3;
	int p,y;
	float r;
	int R;
	bd3.show();//give the garbage value
       

	cout<<"Enter the value of p y and flaot r"<<endl;
	cin>>p>>y>>r;
	bd1 = BankDeposit(p,y,r);//it check the float //Enter 0.03 for r
	bd1.show();
	
	cout<<"Enter the value of p y and int r"<<endl;
	cin>>p>>y>>R;
	bd2 = BankDeposit(p,y,r);//it check the intger
	bd2.show();
        return 0;
}
