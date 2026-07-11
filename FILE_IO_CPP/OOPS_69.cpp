//Google "Cpp reference list" and then you get the all method for the list
#include <iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator It;//made the iteartor for the list 
	for(It = lst.begin(); It!=lst.end(); It++)
	{
	
	    cout<<*It<<" ";
	}
	cout<<endl;
}
int  main(void)
{
	list<int>  list1;//list of 0 length
	//list<int>  list2;//empty list of size 7
        list1.push_back(5);
        list1.push_back(6);
        list1.push_back(7);
        list1.push_back(8);
        list1.push_back(9);
        list1.push_back(9);
        list1.push_back(9);
        list1.push_back(9);
        list1.push_back(9);
        list1.push_back(10);

	list1.sort();//sorting the list
        display(list1);

	list1.reverse();
	display(list1);
/*
	list<int>::iterator iter;//Made the iterato here
	iter = list1.begin();//Give the addresss of first address
        cout<<*iter<<endl; //print the first data
	iter++;
	cout<<*iter<<endl; //print the second data
	*/
        display(list1);
        list1.pop_back();//pop from the last
	display(list1);
        list1.pop_front();//remove from front
        list1.push_back(9);
	display(list1);
	list1.remove(9);//remove 9 element from the list
	display(list1);

	list<int>    list2(3);//3 size list
	list<int>::iterator iter;
	iter = list2.begin();
	*iter = 45;
	iter++;
	*iter = 8;
	iter++;
	*iter = 110;
	display(list2);
	return 0;
}
// STL vs Vector

// STL (Standard Template Library)
// - A library that provides ready-made data structures and algorithms.
// - It consists of Containers, Algorithms, and Iterators.
// - Examples: vector, list, map, set, queue, stack.
// - STL is a complete framework/library.

// Vector
// - Vector is a container provided by the STL.
// - It works like a dynamic array.
// - Its size can grow or shrink at runtime.
// - Elements are stored in contiguous memory locations.
// - Vector is only one component of the STL.

// Relationship:
// STL -> Library
// Vector -> Container inside the STL
//
// Example:
// STL contains: vector, list, map, set, queue, stack, algorithms, iterators
// Vector is one of these containers.}
