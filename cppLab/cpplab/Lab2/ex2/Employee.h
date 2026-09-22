#include <string>
using namespace std;

class Employee
{
	string firstName;
	string lastName;
	int yearlySalary;

public:
		Employee(string, string, int);
		void setFirstName(string);
		string getFirstName();
		void setLastName(string);
		string getLastName();
		void setYearlySalary(int);
		int getYearlySalary();
		void displayMessage(string);


};
