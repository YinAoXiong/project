#include <iostream>
#include <stdio.h>
using namespace std;
typedef   unsigned long long LL;
const int Max=1234580;
LL ansf[Max];
LL ansg[Max];
int main()
{
    ansf[1]=2;
   for(int i=2;i<Max;++i)
   {
       ansf[i]=2*(ansf[i-1]+1)%233333333;
   }
   ansg[1]=3;
   for(int i=2;i<Max;++i)
   {
       ansg[i]=(4*ansf[i-1]+3)%233333333;
   }
   LL n;
   while(scanf("%lld",&n)!=EOF)
   {
       printf("%lld %lld\n",ansf[n],ansg[n]);
   }

    return 0;
}
