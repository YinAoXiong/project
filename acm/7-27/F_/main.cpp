#include <iostream>

using namespace std;

int main()
{
    long long ans[40];
    ans[1]=2;
    for(int i=2;i<40;++i)
		ans[i]=3*ans[i-1]+2;
	int n;
	while(cin>>n)
	{
		cout<<ans[n]<<endl;
	}
    return 0;
}
