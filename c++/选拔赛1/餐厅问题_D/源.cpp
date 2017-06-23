#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int map[11][11] = { 0 };
		int n = 0,sum=0;
		cin >> n;
		for(int j=0;j<n;++j)
			for (int k = 0; k < n; ++k)
			{
				cin >> map[j][k];
			}
		for (int j = 0; j < n; ++j)
		{
			sort(map[j], map[j] + n);
		}
		for (int j = 0; j < n; ++j)
			sum += map[j][n - 1];
		cout << "Case #" << i+1 << ": " << sum << endl;

	}
}