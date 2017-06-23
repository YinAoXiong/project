#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <bitset>  
#include <algorithm>  
#include <functional>  
#include <numeric>  
#include <utility>  
#include <complex>  
#include <sstream>  
#include <iostream>  
#include <iomanip>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cstring>  
#include <ctime>  
#include <cassert>  
using namespace std;
const int N = 1000+10;
unsigned long long a[N];
unsigned long long b[N];
unsigned long long dp[N][N];
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		memset(dp, 0, sizeof(dp));
		int n = 0,m=0;
		cin >> n;
		for (int i = 1; i <= n; ++i)
			cin >> a[i];
		cin >> m;
		for (int i = 1; i <= m; ++i)
			cin >> b[i];
		for(int i=1;i<=n;++i)
			for (int j = 1; j <= m; ++j)
			{
				if (a[i] != b[j])
					dp[i][j] = dp[i - 1][j];
				else
				{
					unsigned long long Max = 0;
					for (int k = 1; k < j; ++k)
						if (b[j] > b[k])
							Max = max(Max, dp[i - 1][k]);
					dp[i][j] = Max + 1;
				}

			}
		unsigned long long ans = 0;
		for (int i = 0; i <= m; ++i)
			ans = max(ans, dp[n][i]);
		cout << ans << endl;

	}
	return 0;
}