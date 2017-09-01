#include <iostream>
#include<queue>
#include<map>
#include<cstring>
#include<climits>
using namespace std;

struct node
{
	int x, y;
	long long times;
	node(int _x, int _y, long long _times)
	{
		x = _x;
		y = _y;
		times = _times;
	}
	bool operator <(const node & temp) const
	{
		return times > temp.times;
	}
};

char mp[1010][1010];
long long vis[1010][1010];
map<char, int> kinds;
int k, w, h, b_x, b_y;
int mx[4] = { 0,0,-1,1 };
int my[4] = { -1,1,0,0 };


long long bfs()
{
	priority_queue<node> q;
	q.push(node(b_x, b_y, 0));
	while (!q.empty())
	{
		node temp = q.top();
		q.pop();
		if (temp.x == 0 || temp.y == 0 || temp.x == h - 1 || temp.y == w - 1)
		{
			return temp.times;
		}
		for (int i = 0; i < 4; ++i)
		{
			int next_x = temp.x + mx[i];
			int next_y = temp.y + my[i];
			if (vis[next_x][next_y] == -1)
			{
				long long time = temp.times + kinds[mp[next_x][next_y]];
				q.push(node(next_x, next_y, time));
				vis[next_x][next_y] = time;
			}
		}

	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(vis, -1, sizeof(vis));
		cin >> k >> w >> h;
		char key;
		int value;
		for (int i = 0; i < k; ++i)
		{
			cin >> key >> value;
			kinds[key] = value;
		}
		bool flag = true;
		for (int i = 0; i < h; ++i)
		{
			cin >> mp[i];
			if (key)
			{
				for (int j = 0; j < w; ++j)
					if (mp[i][j] == 'E')
					{
						b_x = i;
						b_y = j;
						flag = false;
					}
			}

		}
		vis[b_x][b_y] = 0;
		cout << bfs() << endl;


	}
	return 0;
}
