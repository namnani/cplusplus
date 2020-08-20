#include <iostream>

const int foo() {
	return 3;
}

const std::string nani() {
	std::string temp = "hello";
	return temp;
}

int main(void)
{
	int x = foo();
	x = 4;
	std::cout << x << std::endl;

	std::string temp = nani();
	temp = "namnani";
	std::cout  << temp << std::endl;

	const int k = 3;
	int kk = k;
	kk = 4;
	std::cout << kk << std::endl;
	return 0;
}
