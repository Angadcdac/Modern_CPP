#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void)
{
	map<string, int>  marksMap;
	marksMap["Angad"] = 10;
	marksMap["Vijay"] = 20;
	marksMap["Rohan"] = 30;
	//another method for adding the element
	marksMap.insert({{"Giru bhai",169},{"Viraj",187}}); //add at front 
	map<string,int >::iterator iter;
	for(iter = marksMap.begin();iter!= marksMap.end();iter++)
	{
	    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	          //pair                 number
	}
	cout<<endl;
	cout<<"The size of above map is == "<<marksMap.size()<<endl;
	cout<<"The size of above map is == "<<marksMap.max_size()<<endl;
	cout<<"The size of above map is == "<<marksMap.empty()<<endl;
	return 0;
}

//Map is associated array
//Map in c++
//// Map in C++
//it is look like a dictionary in python
// - map is an STL container that stores data in Key-Value pairs.
// - Each key must be unique.
// - Keys are automatically sorted in ascending order.
// - Implemented using a Self-Balancing Binary Search Tree (Red-Black Tree).
// - Provides fast search, insertion, and deletion operations.
//
// Header File:
// #include <map>
//
// Syntax:
// map<Key_DataType, Value_DataType> map_name;
//
// Example:
// map<int, string> students;
//
// Key   Value
// 101 -> "Angad"
// 102 -> "Rahul"
// 103 -> "Amit"
//
// Common Functions:
// m.insert({1, "One"});   // Insert element
// m[2] = "Two";           // Insert/Update element
// m.find(1);              // Search element
// m.erase(2);             // Delete element
// m.size();               // Number of elements
// m.empty();              // Check if map is empty
