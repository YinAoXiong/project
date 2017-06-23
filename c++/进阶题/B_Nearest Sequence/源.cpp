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
int dp[110][110][110];


int main()
{
	string a, b, c;
	while (cin >> a >> b >> c)
	{
		int l1 = a.size(), l2 = b.size(), l3 = c.size();

		memset(dp, 0, sizeof(dp));

		for (int i = 1; i <= l1; ++i)
			for (int j = 1; j <= l2; ++j)
				for (int k = 1; k <= l3; ++k)
				{
					if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
						dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					else
						dp[i][j][k] = max(max(dp[i - 1][j][k], dp[i][j - 1][k]), dp[i][j][k - 1]);
				}
		
		cout << dp[l1][l2][l3] << endl;

	}
	return 0;
}

