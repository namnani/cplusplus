#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	string str1 = "nani";
	string str2 = "nani";
	string str3 = "namnani";

	cout << (str1 == str2) << " " << (str1 == str3) << endl;

	string str4 = "abcde";
	string str5 = "ccccc";

	cout << (str4 < str5) << " " << (str4 > str5) << endl;
}
