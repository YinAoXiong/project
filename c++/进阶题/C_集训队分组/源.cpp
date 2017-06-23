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
const int number = 10010;
vector <int> the_map[number];
int panduan[number];
int bfs(int x)
{
	memset(panduan, 0, sizeof(panduan));
	queue <int> q;
	q.push(x);
	panduan[x] = 1;
	int count = 0;
	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		for (int i = 0; i < the_map[temp].size(); ++i)
		{
			if (panduan[the_map[temp][i]] != 1)
			{
				q.push(the_map[temp][i]);
				panduan[the_map[temp][i]] = 1;
				++count;
			}
		}
	}
	return count;
}
int main()
{
	int N = 0, K = 0, M = 0;
	while (cin>>N>>K>>M)
	{
		int x = 0, y = 0;
		memset(the_map, 0, sizeof(the_map));
		for (int i = 0; i < M;++i)
		{
			cin >> x >> y;
			the_map[x].push_back(y);
		}
		int ans = 0;
		for (int i = 1; i <= N; ++i)
		{
			if (bfs(i) >= N - K)
				++ans;
			if (ans == K)
				break;
		}
		if (ans == K)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}