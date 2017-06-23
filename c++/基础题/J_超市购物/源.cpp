#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct kind
{
	int a;
	int b;
};
int main()
{
	int k = 0, m = 0, time = 0;
	while (cin>>k>>m)
	{
		vector<kind> *map = new vector<kind>[k];
		for (int i = 0; i < k; ++i)
		{
			int n = 0;
			kind temp;
			cin >> n;
			for (int j = 0; j < n; ++j)
			{
				cin >> temp.a >> temp.b;
				map[i].push_back(temp);
			}
		}
		int *f = new int[m + 2];
		for (int i = 0; i < m + 2; ++i)
			f[i] = 0;
		for (int i = 0; i < k; ++i)
			for (int j = m; j >= 0; --j)
				for (int p = 0; p < map[i].size(); ++p)
					if (map[i][p].a <= j)
						f[j] = max(f[j], f[j - map[i][p].a] + map[i][p].b);
		cout << "Case " << ++time << ": " << f[m] << endl << endl;
		delete[] map;
		delete[] f;
	}
}