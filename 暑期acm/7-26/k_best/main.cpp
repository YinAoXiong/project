#include <iostream>

using namespace std;
const int Max=100010;
int vi[Max];
int wi[Max];
int number[Max];
int main()
{
    int n,k;
    while(cin>>n>>k)
	{
		double max=0;
		int key=0;
		for(int i=0;i<n;++i)
		{
			cin>>vi[i]>>wi[i];
			if(vi[i]/wi[i]>max)
			{
				max=vi[i]/wi[i];
				key=i;
			}

		}
		number[0]=key;
		for(int i=1;i<k;++i)
		{

		}


	}
    return 0;
}
