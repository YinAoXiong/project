#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
struct node
{
    int e;
    int w;
};

long long ans=0;
long long number;

list<node> ls[100000+10];
int station[100010];

void dfs(int start)
{
    int kye=0;
    for(auto i=ls[start].begin();i!=ls[start].end();++i)
    {
        number=0;
        if(station[*i.e]==1)
            continue;
        else
        {
            key=1;
            station[*i.e]=1;
            number+=*i.w;
            dfs(*i.e);
            ans=max(ans,number);
            station[*i.e]=0;
        }
    }
    if(key=0)
    {
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,b,e,w;
        node temp;
        ans=0;
        cin>>n>>s;
        for(int i=0;i<n;++i)
        {
            cin>>b>>e>>w;
            temp.e=e,temp.w=w;
            ls[b].push_back(temp);
            temp.e=b;
            ls[e].push_back(temp);
        }
        dfs(s);
        cout<<ans<<endl;

        for(int i=1;i<=n;++i)  //Çå¿ÕÁ´±í
            ls[i].clear();


    }
    return 0;
}
