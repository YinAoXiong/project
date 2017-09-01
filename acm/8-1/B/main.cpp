#include <iostream>
#include<algorithm>
using namespace std;
int ls[110];
int main()
{
    int N;
    while(cin>>N)
    {
        int key=0;
        bool flag=true;
        cin>>ls[0];
        for(int i=1;i<N;++i)
        {
             cin>>ls[i];
             if(key==0&&ls[i]==ls[i-1])
             {
               key=1;
             }
             if(ls[i]<ls[i-1])
             {
                 key=2;
             }
             if(key==1&&ls[i]>ls[i-1])
             {
                 flag=false;
             }
             if(key==2&&ls[i]>=ls[i-1])
                flag=false;

        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
