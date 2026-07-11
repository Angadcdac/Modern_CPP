//This is file for read and write operation using the function
#include <iostream>
#include<fstream>
#include <string>
using namespace std;
int main()
{
	ofstream out;
	out.open("Sample60.txt");
	out<<"This is me\n ";
	out<<"this is for the file opetration\n";
	out<<"Feeling well after getting the speed in the typing \n";
	out.close();
	
	ifstream in;
	string st,st2;
	in.open("Sample60.txt");
	//in>>st;
	//in>>st2;
	//cout<<st<<st2;
	//Read all the file at the time and see on the console
	while(in.eof() == 0)
	{
	   getline (in,st);
	   cout<<st;
	}
	in.close();
	return 0;
}
