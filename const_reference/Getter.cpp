#include <iostream>
class Nani {
	private:
		std::string nani;
	public:
		Nani() { nani = "nani"; }
		const std::string& getNani() {
			return nani;
		}

		const std::string& hello() {
			const std::string temp = "temp";
			return temp;
		}
		
};

int main(void)
{
	Nani nani;
	std::cout << nani.getNani() << std::endl;
	std::cout << nani.hello() << std::endl;
}
