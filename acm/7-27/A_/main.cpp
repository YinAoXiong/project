#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int ans[60];
	ans[1]=1,ans[2]=2;
	for(int i=3;i<60;++i)
		ans[i]=ans[i-1]+ans[i-2];
	int t=0;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int temp=abs(b-a);
		cout<<ans[temp]<<endl;

	}
    return 0;
}
