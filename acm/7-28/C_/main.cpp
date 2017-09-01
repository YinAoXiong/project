#include <iostream>
#include <cstring>
using namespace std;
int n, temp = 0;
int vis[3][100];
int ans[11];
void dfs(int h)
{
	if (h == n)
		++temp;
	else
	{
		for (int i = 0; i<n; ++i)
		{
			if (!vis[0][i] && !vis[1][i + h] && !vis[2][h - i + n])
			{
				vis[0][i] = vis[1][i + h] = vis[2][h - i + n] = 1;

				dfs(h + 1);

				vis[0][i] = vis[1][i + h] = vis[2][h - i + n] = 0;
			}

		}
	}

}
int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		n = i;
		temp = 0;
		memset(vis, 0, sizeof(vis));
		dfs(0);
		ans[i] = temp;
	}
	int N;
	while (cin >> N&&N != 0)
	{

		cout << ans[N] << endl;

	}
	return 0;
}




