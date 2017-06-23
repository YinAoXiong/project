#include<iostream>
using namespace std;
long long caculate_c(long n, long long r)
{
	long long *the_array = new long long[r + 1];
	for (int i = 0; i < r + 1; ++i)
		the_array[i] = 1;
	for (int i = 1; i <= n - r; ++i)
		for (int j = 1; j <= r; ++j)
			the_array[j] += the_array[j - 1];
	long long c = the_array[r];
	delete [] the_array;
	return c;
}
int main()
{
	long long n = 0;
	while (cin>>n)
	{
		cout << caculate_c(2 * n, n) - caculate_c(2 * n, n - 1) << endl;
	}
	return 0;
}