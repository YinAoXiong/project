#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int test = 0;
	cin >> test;
	for (int i = 0; i < test; ++i)
	{
		int n = 0;
		int list[30];
		cin >> n;
		for (int j = 0; j < n; ++j)
			cin >> list[j];
		sort(list, list + n);
		cout << 2 * (list[n - 1] - list[0]) << endl;

	}
	return 0;
}