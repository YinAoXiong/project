//#include<iostream>
//#include<set>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int start = 0, end = 0;
//		cin >> start >> end;
//		vector< set<int> > way;
//		int n = 0;
//		cin >> n;
//		for (int i = 0; i < n; ++i)    //输入将每个输入当作一个集合
//		{
//			int m = 0;
//			cin >> m;
//			for (int j = 0; j < m; ++j)
//			{
//				int temp = 0;
//				cin >> temp;
//				way[i].insert(temp);
//			}
//		}
//		unsigned int i = 1;
//		while(i<way.size())
//		{
//			set<int> result;
//			if (!set_intersection(way[i - 1].begin(), way[i - 1].end(), way[i].begin(), way[i].end(), result).empty())
//			{
//				way[i - 1] = set_union(way[i - 1].begin(), way[i - 1].end(), way[i].begin(), way[i].end(), result);
//				vector<set<int> >::iterator it = way.begin() + i;
//				way.erase(it);
//			}
//			else
//			{
//				++i;
//			}
//		}
//		int key = 0;
//		for (unsigned int j = 0; j < way.size(); ++j)
//		{
//			if (*way[j].find(start)==start && *way[j].find(end)==end)
//			{
//				key = 1;
//			}
//		}
//		if (key)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//}


#include<iostream>
using namespace std;
void united(int a, int b, int *map) //并集
{
	for (int i = 1; i <= 100; ++i)
	{
		if (map[i] == b)
			map[i] = a;
	}
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int map[110] = { 0 };
		for (int i = 0; i <= 100; ++i)
			map[i] = i;
		int start = 0, end = 0;
		cin >> start >> end;
		int n = 0;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int m = 0;
			cin >> m;
			int temp_start = 0,temp_end=0;
			cin >> temp_start;
			for (int j = 0; j < m - 1;++j)
			{
				cin >> temp_end;
				if (map[temp_start] != map[temp_end])
				{
					united(map[temp_start], map[temp_end], map);
				}
			}
		}
		map[start] == map[end] ? cout << "Yes" << endl : cout << "No" << endl;
	}
}