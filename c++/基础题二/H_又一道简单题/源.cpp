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
int table[330];
bool check(int a, int b)
{
	int key = 0;
	while (a>0&&b>0)
	{
		if (a % 10 != b % 10)
			++key;
		a /= 10;
		b /= 10;
		if (key > 1)
			return false;
	}
	if (key == 0)
		return false;
	else if (a != 0 || b != 0)
		return false;
	else
		return true;
}
int main()
{
	for (int i = 1; i <= 320; ++i)
		table[i] = i*i;
	int t = 0;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		int number = 0;
		cin >> number;
		int key = 0;
		for (int j = 1; j <= 320; ++j)
			if (check(number, table[j]))
				++key;
		cout << "Case " << i << ": " << key << endl;
	}
	return 0;
}