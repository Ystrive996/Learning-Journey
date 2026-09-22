#include <iostream>
#include <stdexcept>
using namespace std;

class TestException : public runtime_error 
{
public:
	TestException():runtime_error(""){}
};

void g()
{
	try
	{
		throw TestException();
	}
	catch (const exception& e)
	{
		cout << "Exception caught in funtion g().Rethrowing..." << endl;
		throw e;
	}
}

int main()
{
	try
	{
		g();
	}
	catch (const exception& e)
	{
		cout << "Exception caught in main()" << endl;
	}
}