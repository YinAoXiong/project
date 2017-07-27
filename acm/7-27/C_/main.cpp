#include <iostream>

using namespace std;

int main()
{
	int ans[50];
	ans[1]=1,ans[2]=2;
	for(int i=3;i<50;++i)
		ans[i]=ans[i-1]+ans[i-2];
	int t=0,n=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<ans[n]<<endl;
	}
    return 0;
}
