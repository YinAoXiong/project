#include <iostream>

using namespace std;
char mp[11][11];
int mv[4][4]= {{0,1,0,-1},
    {1,0,-1,0},
    {1,1,-1,-1},
    {-1,1,1,-1}
};

bool f(int x,int y)
{
    for(int i=0;i<4;++i)
    {
         int a=x,b=y,number=0;
        while(mp[a][b]=='X')
        {
            ++number;
            a+=mv[i][0];
            b+=mv[i][1];
             if(number==5)
                return true;
            if(a<0||a>9||b<0||b>9)
                break;
           ;
        }
        --number;
        a=x;
        b=y;
        while(mp[a][b]=='X')
        {
            ++number;
            a+=mv[i][2];
            b+=mv[i][3];
            if(number==5)
                return true;
            if(a<0||a>9||b<0||b>9)
                break;

        }
    }

    return false;
}
int main()
{
    while(cin>>mp[0])
    {
        bool key=false;
        for(int i=1;i<10;++i)
                cin>>mp[i];

        for(int i=0;i<10;++i)
        {
             for(int j=0;j<10;++j)
            {
                if(mp[i][j]=='.')
                {
                    mp[i][j]='X';
                    key=f(i,j);
                    mp[i][j]='.';
                    if(key)
                    {
                        break;
                    }
                }

            }
            if(key)
                break;
        }

        if(key)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
