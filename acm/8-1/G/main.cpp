#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int book[100100];
int main()
{
    int t,n ,L;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&L);
        for(int i=0;i<n;++i)
            cin>>book[i];
        sort(book,book+n);
        int bg=0,ed=n-1,ans=0;
        while(ed>=bg)
        {
            if(ed==bg)
            {
                ++ans;
                break;
            }
            if(book[bg]+book[ed]<=L)
            {
                ++ans;
                ++bg;
                --ed;

            }
            else
            {
                ++ans;
                --ed;
            }
        }
        printf("%d\n\n",ans);

    }
    return 0;
}
