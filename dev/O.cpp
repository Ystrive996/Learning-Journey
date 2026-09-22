#include <iostream>
using namespace std;

int main()
{
	int n,k;
	int max_l = 10e5+5;
	int l[max_l]={0};
	cin >>n>>k;
	for(int i=1;i<=n;++i)
	cin>>l[i]; 
	
	int l = 1;
	int r = 10e8;
	int mid=0;
	while(l<=r)
	{
		int cnt=0;
		mid=(l+r)/2;
		for (int i=1;i<=n;++i)
		{
			cnt+=l[i]/mid;
		}
		if(cnt>k)
		l=mid+1;
		else 
		r=mid-1;
		
	 } 
	 cout<<l-1;
}
