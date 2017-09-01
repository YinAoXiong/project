#include<iostream>
#include<cstring>
#include<queue>

using namespace std;

int n,m,x1,y1,x2,y2;
int my[8]={-1,1,-2,2,-2,2,-1,1};
int mx[8]={-2,-2,-1,-1,1,1,2,2};

int mp[25][25];

void bfs()
{
    queue< pair<int,int> > q;
    q.push(make_pair(x2,y2));
    while(!q.empty())
    {
        pair<int,int> temp;
        temp=q.front();
        q.pop();
        for(int i=0;i<8;++i)
        {
            if(temp.first+mx[i]<1||temp.first+mx[i]>n||temp.second+my[i]<1||temp.second+my[i]>m||mp[temp.first+mx[i]][temp.second+my[i]]>0)
                continue;
            else
            {
                mp[temp.first+mx[i]][temp.second+my[i]]=mp[temp.first][temp.second]+1;
                q.push(make_pair(temp.first+mx[i],temp.second+my[i]));
                if(temp.first+mx[i]==x1&&temp.second+my[i]==y1)
                    return;
            }
        }
    }
}
int main()
{
    while(cin>>n>>m>>x1>>y1>>x2>>y2)
    {
        memset(mp,0,sizeof(mp));
        mp[x2][y2]=1;
        bfs();
        if(mp[x1][y1]>0)
            cout<<mp[x1][y1]-1<<endl;
        else
            cout<<-1<<endl;

    }

    return 0;
}
