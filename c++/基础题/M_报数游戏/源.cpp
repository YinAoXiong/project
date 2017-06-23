#include<iostream>
using namespace std;
bool check(int number)
{
	while (number > 0)
	{
		if (number % 10 == 7)
			return true;
		number /= 10;
	}
	return false;
}
int  caculate(int n, int m, int k)
{
	int number = 0;
	int temp_k = 0;
	number = m;
	if (number % 7 == 0 || check(number))
	{
		++temp_k;
		if (temp_k == k)
			return number;
	}
	if (m == 1||n==m)
	{
		for (int i = 2;; ++i)
		{
			number += 2 * (n - 1);
			if (number % 7 == 0 || check(number))
			{
				++temp_k;
				if (temp_k == k)
					return number;
			}
		}
	}
	else
	{
		for (int i = 2;; ++i)
		{
			if (i % 2 == 0)
			{
				number += 2 * (n - m);
				if (number % 7 == 0 || check(number))
				{
					++temp_k;
					if (temp_k == k)
						return number;
				}
			}
			else
			{
				number += 2 * (m - 1);
				if (number % 7 == 0 || check(number))
				{
					++temp_k;
					if (temp_k == k)
						return number;
				}
			}
		}
	}
	
}

int main()
{
	int n = 0, m = 0, k = 0;
	while (cin >> n >> m >> k&&n!=0)
	{
		cout << caculate(n, m, k) << endl;
	}
	return 0;
}