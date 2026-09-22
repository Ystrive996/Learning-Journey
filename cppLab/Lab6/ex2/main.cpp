#include <iostream>
#include <stdexcept>

using namespace std;

class Item
{
public:
	Item(int value,string name):value(value),name(name)
	{
		cout << "Item "<<name<<" constructor called" << endl;
		if (value == 3)
			throw runtime_error("An exception was thrown");
		
	}
	~Item()
	{
		cout << "Item " << name << " destructor called" << endl;
	}
private:
	int value;
	string name;
};

class ItemGroup
{
public:
	ItemGroup(): i1(1, "1"),
	 i2(2, "2"),
	 i3(3, "3")
	{
	
	}
private:
	Item i1;
	Item i2;
	Item i3;
};
int main()
{
	try
	{
		cout << "Constructing an object of class ItemGroup" << endl;
		ItemGroup item;
	}
	catch (const runtime_error& e)
	{
		cout << e.what() << endl;
	}
}