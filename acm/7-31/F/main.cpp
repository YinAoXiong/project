#include <iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

struct poit
{
	int number, times;
	node(int _number, int _times)
	{
		number = _number;
		times = _times;
	}
	bool operator < (const poit & temp) const
	{
		return times>temp.times;
	}
};

struct content
{
	int e, w;
	content(int _e, int _w)
	{
		e = _e;
		w = _w;
	}

};
vector<content> mp[105];
int vis[105]={0};
int N, M, L, Y,bg,ed;

bfs()
{
    priority_queue<poit> q;
    q.

}
int main()
{
	while (cin >> N >> M >> L >> Y)
	{
	    cin>>bg>>ed;
		int x, y, w;
		for (int i = 0; i<M; ++i)
		{
			cin >> x >> y >> w;
			mp[x].push_back(content(y, w));
			mp[y].push_back(content(x, w));
		}
	}

	return 0;
}
