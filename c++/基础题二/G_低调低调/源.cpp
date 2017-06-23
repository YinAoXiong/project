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
struct station
{
	unsigned long long value;
	int st;
};
int main()
{
	unsigned long long n = 0, k = 0;
	while (cin >> n >> k)
	{
		station ans1, ans2;
		cin >> ans1.value;
		ans1.st = 1;
		unsigned long long temp = 0;
		for (unsigned long long i = 1; i < k; ++i)
		{
			cin >> temp;
			if (temp == ans1.value&&ans1.st == 1)
				ans1.st = 0;
			else if (temp != ans1.value&&ans1.st == 0)
				ans1.st = 1, ans1.value = temp;
		}
		cin >> ans2.value;
		ans2.st = 1;
		for (unsigned long long i = 1; i < k; ++i)
		{
			cin >> temp;
			if (temp == ans1.value)
				continue;
			if (temp == ans2.value&&ans2.st == 1)
				ans2.st = 0;
			else if (temp != ans2.value&&ans2.st == 0)
				ans2.st = 1, ans2.value = temp;
		}
		if (ans1.value > ans2.value)
			cout << ans2.value << ' ' << ans1.value << endl;
		else
			cout << ans1.value << ' ' << ans2.value << endl;
	}
	return 0;
}