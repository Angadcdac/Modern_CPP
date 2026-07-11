#include<iostream>
//class member get the memory after object creation
using namespace std;
class shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public:
	   void initcounter(void)
	   {counter = 0;}
	   void setPrice(void);
	   void displayPrice(void);

};
void shop :: setPrice(void)
{
	cout<<"Enter ID of your item"<<endl;
	cin>>itemId[counter];
	cout<<"get price of your Item"<<endl;
	cin>>itemPrice[counter];
	counter++;
}
void shop::displayPrice(void)
{
	for(int i = 0; i < counter; i++)
	{
		cout <<"The price of Item ID == "<<itemId[i]<<"The Item Price is == "<<itemPrice[i]<<endl;	
	
	}
}
int main(void)
{
	shop obj1;
	obj1.initcounter();
	obj1.setPrice();
	obj1.setPrice();
	obj1.setPrice();
	obj1.displayPrice();
	return 0;

}
