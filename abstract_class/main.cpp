#include "AbstractClassExample.h"
#include "PhysicalClassExample.h"
#include <iostream>

using namespace Nani;

int main(void)
{
	std::cout << "hello" << std::endl;
	PhysicalClassExample physicalClassExample;
	//physicalClassExample.hello();
	std::cout << physicalClassExample.getNani() << std::endl;
	physicalClassExample.setNani(7);
	std::cout << physicalClassExample.getNani() << std::endl;
	std::cout << "bye" << std:: endl;
}
