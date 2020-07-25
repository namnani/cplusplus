#include <iostream>
#include <string>

int main(void)
{
	std::string str = "";
	getline(std::cin, str);
	std::cout << str << std::endl;

	str.append("you");
	std::cout << str << std::endl;
	std::cout << str[0] << std::endl;
}
