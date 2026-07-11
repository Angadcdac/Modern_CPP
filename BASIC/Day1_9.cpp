#include <iostream>
int main()
{
	int a;         // default-initialization (no initializer)
        // Traditional initialization forms:
        int b = 5;     // copy-initialization (initial value after equals sign)
        int c ( 6 );   // direct-initialization (initial value in parenthesis)
	std::cout <<"Value of the c is == "<<c<<"\n";
        // Modern initialization forms (preferred):
        int d { 7 };   // direct-list-initialization (initial value in braces)
	std::cout <<"Value of the d is == "<<d<<"\n";
        int e {};      // value-initialization (empty braces)
	std::cout<<"Value of the e is == "<<e<<"\n";
        return 0;
}
		       
