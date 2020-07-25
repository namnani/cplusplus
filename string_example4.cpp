#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1;
	string str2 = "nani2";
	string str3("nani3");

	char s[] = {'n', 'a', 'n', 'i', '\0'};
	string str4(s);

	string temp = "namnani";
	string str5(temp);

	string *p = new string();	
	p->append(" Great!!");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << *p << endl;
	delete p;

	p = new string("C++");
	p->append(" Great!!");
	cout << *p << endl;
	delete p;

	temp = "abcd";
	p = new string(temp);
	p->append(" Great!!");
	cout << *p << endl;
	delete p;
}
