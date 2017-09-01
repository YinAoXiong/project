#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int ls_r[100000+10];
int ls_j[100000+10];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(ls_r,0,sizeof(ls_r));
        memset(ls_j,0,sizeof(ls_j));
        for(int i=0;i<n;++i)
        {
            cin>>ls_r[i];
        }
        for(int i=0;i<n;++i)
            cin>>ls_j[i];
        sort(ls_r,ls_r+n);
        sort(ls_j,ls_j+n);
        long long ans=0;
        for(int i=0;i<n;++i)
        {
            ans+=(ls_r[i]-ls_j[n-i-1])*(ls_r[i]-ls_j[n-i-1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
