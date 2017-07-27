#include <iostream>

using namespace std;

int main()
{
	long long ans[10010];
	ans[1]=2;
	for(int i=2;i<10001;++i)
		ans[i]=ans[i-1]+4*(i-1)+1;
	int c=0;
	cin>>c;
	while(c--)
	{
		int n=0;
		cin>>n;
		cout<<ans[n]<<endl;

	}
    return 0;
}
