#include <iostream>
#include <algorithm>
using namespace std;
const int Max=500000+10;

struct chess
{
    int x,y;
    char kind;
    chess(int _x,int _y,char _kind)
    {
        x=_x;
        y=_y;
        kind=_kind;
    }
};
bool cmpx(const chess &a,const chess &b)
{
    return a.x<b.x;
}
bool cmpy(const chess &a,const chess &b)
{
    return a.y<b.y;
}
chess mp[Max];
int n,x0,y0;
void f()
{
    sort(mp,mp+n,cmpx);
        for(int i=n-1;i>=0;--i)
        {
            if(mp[i].x<x0&&mp[i].y==y0)
            {
                if(mp[i].kind=='R'||mp[i].kind=='Q')
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else
                    break;
            }
            if(mp[i].x<x0&&(mp[i].y+mp[i].x==x0+y0||mp[i].y-mp[i].x==y0-x0))
            {
                if(mp[i].kind=='B'||mp[i].kind=='Q')
                    cout<<"YES"<<endl;
                else
                    break;
            }

        }
        for(int i=0;i<n;++i)
        {
            if(mp[i].x>x0&&mp[i].y==y0)
            {
                if(mp[i].kind=='R'||mp[i].kind=='Q')
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else
                    break;
            }
              if(mp[i].x>x0&&(mp[i].y+mp[i].x==x0+y0||mp[i].y-mp[i].x==y0-x0))
            {
                if(mp[i].kind=='B'||mp[i].kind=='Q')
                    cout<<"YES"<<endl;
                else
                    break;
            }
        }

        sort(mp,mp+n,cmpy);
        for(int i=0;i<n;++i)
        {
            if(mp[i].y>y0&&mp[i].x==x0)
            {
                 if(mp[i].kind=='R'||mp[i].kind=='Q')
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else
                    break;
            }

        }
        for(int i=n-1;i>=0;--i)
        {
            if(mp[i].y<y0&&mp[i].x==x0)
            {
                 if(mp[i].kind=='R'||mp[i].kind=='Q')
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else
                    break;
            }
        }
        cout<<"NO"<<endl;
        return;
}
int main()
{
    while(cin>>n)
    {
        cin>>x0>>y0;
        int x,y;
        char kind;
        for(int i=0;i<n;++i)
            {
                cin>>kind>>x>>y;
                mp[i]=chess(x,y,kind);
            }

    }
    return 0;
}
