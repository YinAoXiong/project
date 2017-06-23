#include<iostream>
#include<algorithm>
using namespace std;
int sum(int *list, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += list[i];
	return sum;
}

bool if_fit(int m, int n, int time, int *list)
{
	int t = 0;
	int time_sum = 0;
	for (int i = 0; i < m; ++i)
	{
		if (list[i] > time)
			return false;
		else if (time >= time_sum + list[i])
			time_sum += list[i];
		else
		{
			++t;
			time_sum = list[i];
		}

	}
	return t+1 <= n;
}
int answer(int m, int n, int end, int *list)
{
	int start = 0;
	int mid = 0;
	int ans = end;
	while (start < end)
	{
		mid = (start + end) / 2;
		if (if_fit(m, n, mid, list))
		{
			ans = mid;
			end = mid;
		}
		else
		{
			start = mid+1;
		}
	}
	return ans;
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int m = 0, n = 0;
		cin >> m >> n;
		int *list = new int[m];
		for (int i = 0; i < m; ++i)
		{
			cin >> list[i];
		}
		int end = sum(list, m);
		cout << answer(m, n, end, list) << endl;
	}

}