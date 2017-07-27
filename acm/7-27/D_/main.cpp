#include <iostream>
#include <stdio.h>
using namespace std;
long long w(int a,int b,int c)
{
	if(a<1||b<1||c<1)
		return 1;
	else if(a>20||b>20||c>20)
		return w(20,20,20);
	else
		return w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}
int main()
{
    int a,b,c;
    while(true)
	{
		cin>>a>>b>>c;
		if(a==-1&&b==-1&&c==-1)
			break;
		printf("w(%d,%d,%d) = %lld\n",a,b,c,w(a,b,c));

	}
    return 0;
}
