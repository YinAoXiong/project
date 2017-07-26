#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
LL l,n,m,ls[50010];
bool caculate(LL maximum)
{
	int ans=0,begin=0;
	for(LL i=1;i<n+2;++i)
	{
		if(ls[i]-ls[begin]<maximum)
			++ans;
		else
			begin=i;
		if(ans>m)
			return false;
	}
	return true;
}
int main()
{
    while(cin>>l>>n>>m)
	{
		ls[0]=0;
		ls[n+1]=l;
		for(LL i=1;i<n+1;++i)
			cin>>ls[i];

		sort(ls,ls+n+2);
		LL left=1,right=l;
		LL mid,ans;
		while(right>=left)
		{
			mid=(left+right)/2;
			if(caculate(mid))
			{
				ans=mid;
				left=mid+1;
			}
			else
			{

				right=mid-1;
			}
		}
		cout<<ans<<endl;
	}
    return 0;
}
