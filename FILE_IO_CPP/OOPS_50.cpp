#include<iostream>
#include<fstream>
using namespace std;
int main(void)
{
	ofstream hout("Sample2.txt");//open the file with the construcntor
	cout<<"Enter your name"<<endl;
	string name;
	cin>>name;
	hout<<"My name is =="<<name;//Write in the file//use the getline for full line  
	hout.close();// closing the file
        

	//Read the same file 
	string content;
	ifstream hin("Sample2.txt");//open the file of object
	hin>>content;
	cout <<"The content of this file is "<<content<<endl;
	hin.close();//Close the file 
	return 0;
}
