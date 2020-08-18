#include <iostream>


class Nani {
	public:
		std::string* namnani;
		Nani() : namnani(NULL) { }
};

int main(void)
{
	Nani nani;

	std::cout << nani.namnani << std::endl;

	return 0;
}
