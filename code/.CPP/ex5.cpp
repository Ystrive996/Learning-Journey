#include <iostream>
#include <string>

using namespace std;

unsigned long strLen1(const char *s);
unsigned long strLen2(const char *s);

int main()
{
    char a[100];
    cout << "Enter a string:";
    cin >> a;
    cout << "According to stringLength1 the string length is: " << strLen1(a) << endl;
    cout << "According to stringLength2 the string length is: " << strLen2(a) << endl;
}

unsigned long strLen1(const char *s)
{
    unsigned long a = 0;
    for (int i = 0; s[i]; ++i)
    {
        ++a;
    }
    return a;
}

unsigned long strLen2(const char *s)
{
    unsigned long a = 0;
    while (*s)
    {
        ++a;
        s++;
    }
    return a;
}
