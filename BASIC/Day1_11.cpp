#include <iostream>
int main(void)
{
	int x {};    // direct-list-initialization with initial value 0
        std::cout << x; // we're using that 0 value here
	int y ();    // direct-list-initialization with initial value 0
        std::cout << y; // we're using that 0 value here
	int b;    // direct-list-initialization with initial value 0
        std::cout << b; // we're using that 0 value here
        return 0;
}
