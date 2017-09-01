#include <iostream>

using namespace std;
long long ans[1010]={0};
long long dp[1010][1010]={0};
int main()
{
    dp[0][0]=1;
    for(int i=1;i<1010;++i)
    {
        for(int j=1;j<1010;++j)
        {
            if(j>i)
                break;
            else
            {
                dp[i][j]=j*(dp[i-1][j-1]+dp[i-1][j]);
                ans[i]+=dp[i][j];
            }

        }

    }

    int t=0;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
         int n;
        cin>>n;
        cout<<"Case "<<i<<": "<<ans[n]<<endl;
    }

    return 0;
}
