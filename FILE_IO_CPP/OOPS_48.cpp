#include<iostream>
#include<fstream>
using namespace std;
/*
  The usefule classes for the working files in c++ are
  1.fstreambase 
  2.ifsteam derived from fstreambase
  3.ofstream --->derived from fstreambase
 */
/*
 In order work with files in cpp you will have to open it there is two way ti open the file
 1.Using the constructor
 2.using the member function
 */

int main(void)
{
	string st;
	string st2;
        //openning file using the constructor for reading it
	//Ofstream is class and out is object
	ifstream in("Sample.txt");//Read operation
	//in>>st2;//i will take the one words from the txt file 
/*	getline(in ,st2);//Read the one words
        cout << st2 << endl;//read the first line
	getline(in ,st2);//for the second line
	cout << st2 << endl;*/
	//this loop print the whole line
	while (getline(in, st2))
        {
		cout << st2 << endl;
        }   
	return 0;
}
