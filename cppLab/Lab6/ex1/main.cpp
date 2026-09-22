#include <iostream>
#include <stdexcept>
using namespace std;

class TestException : public runtime_error
{
public:
	TestException() :runtime_error("") {}
};

int main()
{
	cout << "This is a test" << endl;
	try
	{
		try
		{
			throw TestException();
		}
		catch (const runtime_error& e)
		{
			throw e;
		}
	}
	catch (...) 
	{
		cout << "abnormal program termination" << endl;
	}
}