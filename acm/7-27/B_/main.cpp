#include <iostream>

using namespace std;

int main()
{
	long long ans[55];
	ans[1]=3;
	ans[2]=6;
	ans[3]=6;
	for(int i=4;i<55;++i)
		ans[i]=ans[i-1]+2*ans[i-2];
	int n;
	while(cin>>n)
	{
		cout<<ans[n]<<endl;
	}

    return 0;
}
