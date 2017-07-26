#include <iostream>

using namespace std;
const int Max=100010;
int cloth[Max];
int n=0,k=0;
int tmax=0;

bool caculate(int mid)
{
	int mac_time=mid;
	int x1=0;
	if(k==1&&tmax>mid)
		return false;
	else if(k==1&&tmax<=mid)
		return true;
	for(int i=0;i<n;++i)
	{
		if(cloth[i]>mid)
		{
			if((cloth[i]-mid)%(k-1)>0)
				{
					x1=(cloth[i]-mid)/(k-1)+1;
					mac_time-=x1;
				}
				else
				{
					x1=(cloth[i]-mid)/(k-1);
					mac_time-=x1;
				}
		}
		if(mac_time<0)
			return false;
	}
	return true;
}
int main()
{

	while(cin>>n)
	{

		for(int i=0;i<n;++i)
		{
			cin>>cloth[i];
			if(cloth[i]>tmax)
				tmax=cloth[i];
		}

		cin>>k;
		int left=0,right=tmax,mid=0,ans=0;
		while(right>=left)
		{
			mid=(left+right)/2;
			if(caculate(mid))
			{
				ans=mid;
				right=mid-1;
			}
			else
			{
				left=mid+1;
			}


		}
		cout<<ans<<endl;
	}
    return 0;
}
