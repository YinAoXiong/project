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
int main()
{
	int n;
	int dp[1010];
	int a[1010];
	int c[1010];
	while (cin>>n)
	{
		
		for (int i = 0; i < 1010; ++i)
			dp[i] = 1;
		for (int i = 0; i < 1010; ++i)
			c[i] = 1;
		memset(a, 0, sizeof(a));
		
		for (int i = 1; i <= n; ++i)
			cin >> a[i];
		for (int i = 1; i <= n; ++i)
		{
			
			for (int j = 1; j <= i - 1; ++j)
			{
				if (a[j] < a[i])
				{
					if (dp[j] + 1 == dp[i])
						c[i] += c[j];
					else if (dp[j]+1 > dp[i])
					{
						dp[i] = dp[j] + 1;
						c[i] = c[j];
					}
				}
			}
		}
		int max = 0, number = 0;
		for (int i = 1; i <= n; ++i)
			if (dp[i] == max)
				number += c[i];
			else if(dp[i]>max)
			{
				max = dp[i];
				number = c[i];
			}
		cout << max << ' ' << number << endl;

		
		
	}
	return 0;
}
