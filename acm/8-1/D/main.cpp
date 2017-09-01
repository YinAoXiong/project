#include <iostream>
#include <cstring>
using namespace std;
int ls[50],w[25];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(ls,0,sizeof(ls));
        int p;
        for(int i=0;i<n;++i)
        {
            cin>>p;
            ls[p+i]=1;
        }
        int k=0;
        for(int i=0;i<2*n;++i)
        {
            if(ls[i]==1)
            {
                int l=0,r=1;
               for(int j=i-1;j>=0;--j)
               {

                    if(ls[j]==1)
                        ++r;
                    else
                        ++l;
                        if(l==r)
                    {
                        w[k++]=l;
                        break;
                    }
               }
            }
        }
        for(int i=0;i<n;++i)
            cout<<w[i]<<' ';
        cout<<endl;
    }
    return 0;
}
