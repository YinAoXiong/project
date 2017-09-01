#include <iostream>
#include <string>
#include <vector>
#include<queue>
#include<cstring>
using namespace std;
typedef long long LL;
vector<int> ls[210];
int n, a, b,ans=0;
int vis[210];
void bfs()
{
	queue<int> q;
	q.push(a);
	while (!q.empty())
	{
		int tmep = q.front();
		q.pop();
		for (int i = 0; i < ls[tmep].size(); ++i)
		{

			if (vis[ls[tmep][i]] == -1)
			{
				q.push(ls[tmep][i]);
				vis[ls[tmep][i]] = vis[tmep] + 1;
				if (ls[tmep][i] == b)
					return;
			}

		}
	}
}
int main()
{
	while (cin >> n&&n != 0)
	{
		cin >> a >> b;
		memset(vis, -1, sizeof(vis));
		for (int i = 1; i <= n; ++i)
			ls[i].clear();
		vis[a] = 0;
		int k;
		for (int i = 1; i <= n; ++i)
		{
			cin >> k;
			if (i - k>0)
			{
				ls[i].push_back(i - k);
			}
			if (i + k <= n)
			{
				ls[i].push_back(i + k);
			}
		}
		bfs();
		cout << vis[b] << endl;
	}
	return 0;
}
