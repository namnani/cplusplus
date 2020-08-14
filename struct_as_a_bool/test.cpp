#include <iostream>

using namespace std;

struct nani {
	int var;
	operator bool() { return true; }
};

int main(void)
{
	nani x;
	int y = x ? 3 : 4;	

	cout << y << endl;

	return 0;
}
