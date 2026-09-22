#include <iostream>
#include <string>

using namespace std;

int strCmp1(const char *a, const char *b);
int strCmp2(const char *a, const char *b);
int strNCmp1(const char *a, const char *b, unsigned n);
int strNCmp2(const char *a, const char *b, unsigned n);
int main()
{
    char a[100];
    char b[100];
    cout << "Enter two strings: ";
    cin >> a >> b;
    cout << "The value returned from stringCompare1(\"" << a << "\",\"" << b << "\") is " << strCmp1(a, b) << endl;
    cout << "The value returned from stringCompare2(\"" << a << "\",\"" << b << "\") is " << strCmp2(a, b) << endl;
    cout << endl;
    cout << "The value returned from stringNCompare1(\"" << a << "\",\"" << b << "\",3) is " << strNCmp1(a, b, 3) << endl;
    cout << "The value returned from stringNCompare2(\"" << a << "\",\"" << b << "\",3) is " << strNCmp2(a, b, 3) << endl;
}

int strCmp1(const char *a, const char *b)
{
    for (int i = 0; !(a[i] == '\0' && b[i] == '\0'); ++i)
    {
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }
    return 0;
}
int strNCmp1(const char *a, const char *b, unsigned n)
{
    for (int i = 0; (!(a[i] == '\0' && b[i] == '\0')) && i < n; ++i)
    {
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }
    return 0;
}

int strCmp2(const char *a, const char *b)
{
    while (*a && *b && *a == *b)
    {

        a++;
        b++;
    }
    if (*a < *b)
        return -1;
    if (*a > *b)
        return 1;
    return 0;
}
int strNCmp2(const char *a, const char *b, unsigned n)
{
    int counter = 0;
    while (*a && *b && *a == *b)
    {
        if (counter >= n - 1)
            return 0;
        a++;
        b++;
        counter++;
    }
    if (*a < *b)
        return -1;
    if (*a > *b)
        return 1;
    return 0;
}