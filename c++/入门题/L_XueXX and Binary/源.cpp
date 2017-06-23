#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		long long number = 0,sum=0;
		cin >> number;
		while (number>0)
		{
			if (number % 2 == 1)
				++sum;
			number = number / 2;
		}
		cout << sum << endl;
	}
	return 0;
}