

#include <iostream>


void f()
{
	int num = 88888;
	num = num >> 9;
	if ((num & 1) == 1)
	{
		std::cout << "The 10th bit of the number is 1 ";
	}else {
		std::cout << "The 10th bit of the number is 0 ";

	}
}


int main()
{
	f();
}