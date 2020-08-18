#include <iostream>
using namespace std;
class A {
	public:
		A() { cout << "A" << endl; }
		virtual ~A() { cout << "~A" << endl; }
};

class B : public A {
	public:
		B() { cout << "B" << endl; }
		virtual ~B() { cout << "~B" << endl; }
};

class C : public B {
	public:
		C() { cout << "C" << endl; }
		~C() { cout << "~C" << endl; }
};

int main(void)
{
	A* a = new C();

	delete a;

	return 0;
}
