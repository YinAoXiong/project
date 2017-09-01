#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
       long long ans=sqrt(n);
       printf("%lld\n",ans);
    }
    return 0;
}
