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
	int n = 0;
	while (cin >> n)
	{
		string a;
		
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			int n1 = 0;
			if (a.size() == 5)
				cout << 3 << endl;
			else
			{
				if (a[0] == 'o')
					++n1;
				if (a[1] == 'n')
					++n1;
				if (a[2] == 'e')
					++n1;
				if (n1 >= 2)
					cout << 1 << endl;
				else
					cout << 2 << endl;
			}
		}
	}
	return 0;
}