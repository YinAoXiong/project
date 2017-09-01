#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
typedef  long long LL;

LL ls[65600];
int main()
{
    for(LL i=1;i<65600;++i)
        ls[i]=(i+1)*i/2;
    LL k;
    string s="123456789";
    while(scanf("%lld",&k)!=EOF)
    {
        LL n;
        for(LL i=0;i<k;++i)
        {
            scanf("%lld",&n);
            for(LL j=65600-1;j>=0;--j)
            {
                if(n<=ls[j])
                {
                    if(j%9!=0)
                    {
                        cout<<s[j%9-1]<<endl;
                        break;
                    }
                    else
                    {
                        cout<<9<<endl;
                        break;
                    }

                }
            }

        }
    }
    return 0;
}
