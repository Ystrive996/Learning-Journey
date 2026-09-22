#include <iostream>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(b<m*a) 
    {
	int s=(n/m)*b+(n%m)*a;
    int t=(n/m+1)*b;
    cout<<(s>t?t:s);
}
	else 
	cout<<n*a;	
}

