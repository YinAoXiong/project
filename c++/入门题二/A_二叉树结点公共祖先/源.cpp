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
	long long a = 0, b = 0;
	while (cin>>a>>b)
	{
		while (a!=b)
		{
			if (a > b)
				a /= 2;
			else
				b /= 2;
		}
		cout << a << endl;
	}
	return 0;
}