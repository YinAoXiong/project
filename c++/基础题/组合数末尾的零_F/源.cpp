#include<iostream>
using namespace std;
long long list[2000];

long long cnr(long long * c, int n, int r)
{
	long long i, j;
	for (i = 0; i <= r; i++) c[i] = 1UL; /*Initialize*/
	for (i = 1; i <= n - r; i++)
		for (j = 1; j <= r; j++)
			c[j] += c[j - 1];

	return c[r];

}
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		
		long long m = 0, n = 0, zuhenumber = 0, zero_number = 0;
		cin >> m >> n;
		for (int j = 0; j <= n; ++j)
			list[j] = 1;
		zuhenumber =cnr(list,m,n);
		while (zuhenumber > 0)
		{
			if (zuhenumber % 2 == 0)
				++zero_number;
			else
				break;
			zuhenumber /= 2;
		}
		cout << zero_number << endl;
	}
	return 0;
}

