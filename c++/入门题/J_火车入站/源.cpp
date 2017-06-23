#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;


struct time_list
{
	long long i, o;

	friend bool operator <(const time_list a, const time_list b)
	{
		return a.o > b.o;
	}
};
bool panduan(const time_list a, const time_list b)
{
	return a.i < b.i;
}

time_list list[10010];
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n = 0,station_number=1;
		priority_queue<time_list, vector<time_list> > station;
		cin >> n;
		for (int j = 0; j < n; ++j)
			cin >> list[j].i >> list[j].o;
		sort(list, list + n, panduan);
		station.push(list[0]);
		for (int j = 1; j < n; ++j)
		{
			time_list temp = station.top();
			if (list[j].i > temp.o)
			{
				station.pop();
				station.push(list[j]);
			}
			else
			{
				station.push(list[j]);
				if (station.size() > station_number)
					station_number = station.size();
			}
		}
		cout << station_number << endl;

	}
}