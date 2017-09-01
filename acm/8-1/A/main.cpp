#include <iostream>
#include <algorithm>
#include <cmath>
#include<cstdio>
#include <climits>
using namespace std;
struct node
{
	double l, r;
	node(double _x=0, double _y=0)
	{
		l = _x;
		r = _y;
	}
	bool operator <(const node &temp) const
	{
		return l>temp.l;
	}
};

node ls[10100];
int main()
{
	int n, d;
	int cas = 0;
	while (cin >> n >> d)
	{
		if (n == 0 && d == 0)
			return 0;
		int x, y;
		int key = 0;
		for (int i = 0; i<n; ++i)
		{
			cin >> x >> y;
			if (y > d||d<0)
			{
				key = 1;
			}
			else
			{
				double length = sqrt(d*d - y*y);
				ls[i] = node(x - length, x + length);
			}

		}



		if (key)
			cout << "Case " << ++cas << ": " << -1 << endl;
		else
		{
			double m_right = 0x3f3f3f3f;
			int ans = 0;
			sort(ls, ls + n);
			for (int i = 0; i<n;++i)
			{
				if (ls[i].r < m_right)
				{
					++ans;
					m_right = ls[i].l;
				}
			}
			cout << "Case " << ++cas << ": " << ans << endl;
		}


	}
	return 0;
}


