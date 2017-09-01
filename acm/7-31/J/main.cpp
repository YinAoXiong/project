#include <iostream>
#include <queue>
#include <cstring>
#include<climits>
using namespace std;

struct node
{
	int x, y, number;
	node(int _x, int _y, int _number)
	{
		x = _x;
		y = _y;
		number = _number;
	}
	bool operator < (const node & temp)const
	{
		return number > temp.number;
	}
};
int N, M, z_x, z_y;
int vis[110][110];
char mp[110][110];
int mx[4] = { 0,0,1,-1 };
int my[4] = { 1,-1,0,0 };
int ans = INT_MAX;
bool key = false;
void bfs()
{
	priority_queue<node> q;
	q.push(node(z_x, z_y, 0));
	while (!q.empty())
	{
		node temp = q.top();
		if (temp.x == 1 || temp.y == 1 || temp.x == N || temp.y == M)
		{
			key = true;
			ans = min(ans, vis[temp.x][temp.y]);
		}
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int x_next = temp.x + mx[i];
			int y_next = temp.y + my[i];
			if (mp[x_next][y_next] == '#' || vis[x_next][y_next] > -1)
			{
				continue;
			}
			else
			{
				if (mp[x_next][y_next] == '*')
				{
					q.push(node(x_next, y_next, temp.number + 1));
					vis[x_next][y_next] = temp.number + 1;
				}

				else
				{
					q.push(node(x_next, y_next, temp.number));
					vis[x_next][y_next] = temp.number;
				}


			}

		}

	}

}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{

		cin >> N >> M;
		memset(mp, '#', sizeof(mp));
		memset(vis, -1, sizeof(vis));
		ans = INT_MAX;
		key = false;
		for (int i = 1; i <= N; ++i)
			for (int j = 1; j <= M; ++j)
			{
				cin >> mp[i][j];
				if (mp[i][j] == '@')
				{
					z_x = i;
					z_y = j;
				}
			}
		vis[z_x][z_y] = 0;
		bfs();
		if (key)
			cout << ans << endl;
		else
			cout << -1 << endl;

	}
	return 0;
}
