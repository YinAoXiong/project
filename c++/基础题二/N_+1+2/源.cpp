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
	unsigned long long x = 0, y = 0;
	while (cin>>x>>y)
	{
		if (y > x)
			cout << -1 << endl;
		else
		{
			cout << y * 2 + x - y << endl;
		}
	}
	return 0;
}