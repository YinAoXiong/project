#include<iostream>
#include<algorithm>
using namespace std;
int list[20010] = { 0 };
bool panduan(int a, int b)
{
	return a > b;
}
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n = 0,max_sum=0;
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			cin >> list[j];
		}
		sort(list, list + n,panduan);
		int temp = n / 3;
		for (int j = 0; j < temp; ++j)
		{
			max_sum += list[3 * j + 2];
		}
		cout << max_sum << endl;

	}
}