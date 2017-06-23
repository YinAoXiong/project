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
	int n = 0, t = 0;
	while (cin>>n>>t)
	{
		int number = 0;
		int ans = 0;
		int *list = new int[n+2];
		for (int i = 0; i < n; ++i)
			cin >> list[i];
		for (int i = 0; i < n; ++i)
		{
			number += list[i];
			if (number > t)
				break;
			else
			{
				++ans;
			}
		}
		cout << ans << endl;
		delete[] list;
	}
	return 0;
}