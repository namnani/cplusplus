#include "PhysicalClassExample.h"

#include <iostream>

using namespace Nani;

void PhysicalClassExample::setNani(int nani)
{
	std::cout << "hello set nani" << std::endl;
	_nani = nani;
}

int PhysicalClassExample::getNani()
{
	std::cout << "hello get nani" << std::endl;
	return _nani;
}

void PhysicalClassExample::hello()
{
	std::cout << "hello test" << std::endl;
}
