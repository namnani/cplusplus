#include <iostream>

int main(void)
{
	const std::string nani = "hi";
	std::cout << nani << std::endl;
	
	// const keyword let it be not modified. 
	// nani = "nani"; // Compile Error.
	std::cout << nani << std::endl;
}
