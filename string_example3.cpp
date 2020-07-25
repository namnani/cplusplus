#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string str;
	

	cin >> str; // 스페이스가 들어간 문자열의 경우 전까지만 입력받음.
	cout << str;
	
	getline(cin, str); // 한줄을 통째로 입력받음. getline(cin, str, '\n')과 같음.
	cout << str;

	getline(cin, str, 'a'); // a 문자 앞까지만 입력받음.
	cout << str; 
}
