#include <iostream>
#include<queue>
#include<cstring>
using namespace std;

char mp[22][22];
int mvp[22][22];
int mx[4] = { 0,0,1,-1 };
int my[4] = { 1,-1,0,0 };
int x, y;
int b_x, b_y;
int ans = 0;
void bfs()
{
	pair<int, int> y;
	queue< pair<int, int> > q;
	q.push(make_pair(b_x, b_y));      //放入头;
	while (!q.empty())
	{
		y = q.front();       //取出
		q.pop();
		++ans;

		for (int i = 0; i < 4; ++i)
		{
			if (mp[y.first + mx[i]][y.second + my[i]] == '.' && mvp[y.first + mx[i]][y.second + my[i]] != 1)
			{
				mvp[y.first + mx[i]][y.second + my[i]]=1;
				q.push(make_pair(y.first + mx[i], y.second + my[i]));

			}


		}
	}
}
int main()
{

	while (cin >> x >> y&&x!=0)
	{
		ans = 0;
		memset(mp, '#', sizeof(mp));
		memset(mvp, 0, sizeof(mvp));

		for (int i = 1; i <= y; ++i)
			for (int j = 1; j <= x; ++j)
			{
				cin >> mp[i][j];
				if (mp[i][j] == '@')
				{
					b_x = i;
					b_y = j;
				}

			}


		bfs();
		cout << ans << endl;
	}
	return 0;
}
