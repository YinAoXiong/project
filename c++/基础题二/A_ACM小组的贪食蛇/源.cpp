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

struct position
{
	 long long row;
	 long long column;
};
int main()
{
	long long n = 0;
	while (cin>>n)
	{
		position *the_map = new position[n + 5];
		position begin;
		cin >> begin.row >> begin.column;
		for (int i = 0; i < n; ++i)
			cin >> the_map[i].row >> the_map[i].column;
		long long sum_number = 0;
		for (int i = 0; i < n; ++i)
		{
			sum_number += abs(the_map[i].row - begin.row) + abs(the_map[i].column - begin.column);
			begin = the_map[i];
		}
		cout << sum_number << endl;
		delete[] the_map;
		
	}    
	return 0;
}