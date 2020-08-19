#include <iostream>
using namespace std;

int main(void)
{
	int value = 5;
	int* ptr = &value;

	*ptr = 6;

	std::cout << value << std::endl;
	std::cout << *ptr << std::endl;

	const int value2 = 5;
	// int* ptr2 = &value2; // Compile Error (const int* -> int : casting X).
	
	const int value3 = 5;
	const int* ptr3 = &value3;

	// *ptr3 = 6; // Compile Error.

	std::cout << value3 << std::endl;
	std::cout << *ptr3 << std::endl;

	int value4 = 5;
	const int* ptr4 = &value4;
	value4 = 6;
	// *ptr4 = 7; // Compile Error.

	std::cout << "value4 : " << value4 << std::endl;
	std::cout << "*ptr4 : " << *ptr4 << std::endl;




	int value5 = 5;
	const int* ptr5 = &value5;
	int value6 = 6;
	ptr5 = &value6;

	std::cout << "value5 : " << value5 << std::endl;
	std::cout << "*ptr5 : " << *ptr5 << std::endl;
	

	return 0;
}
