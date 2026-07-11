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
	string st2 = "This is the write file program enjoy the journey";
	ofstream  out("Write.txt");
	out<st2;
	return 0;
}
