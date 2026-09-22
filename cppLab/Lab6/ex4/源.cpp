#include <iostream>
#include <stdexcept>
using namespace std;

class TestException : public runtime_error
{
public:
	TestException() :runtime_error("") {}
};

void f()
{
	throw TestException();
}

void g()
{
	f();
}

void h()
{
	g();
}

int main()
{
	try
	{
		h();
	}
	catch (const runtime_error& e)
	{
		cout << "In main: Caught TestException" << endl;
	}
}