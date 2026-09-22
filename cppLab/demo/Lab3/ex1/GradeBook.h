#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string,string);
	void setCourseName(string);
	string getCourseName() const;
	void displayMessage() const;
	void setTeacherName(string);
	string getTeacherName() const;
private:
	string courseName;
	string teacherName;
};