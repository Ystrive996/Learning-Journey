#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    double r;
    if (a >= 401)
    {
        r = (a - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
        
    }
    else if (a >= 151)
    {
        r = (a - 150) * 0.4663 + 150 * 0.4463;
        
    }
    else
    {
        r = a * 0.4463;
       
    }
    cout << setprecision(1) << fixed << r;
}