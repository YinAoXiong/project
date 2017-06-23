#include<iostream>
#include<cmath>
using namespace std;
int gcd(int m, int n)
{
	if (m == 0)
		return n;
	if (n == 0)
		return m;
	if (m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
	while (n != 0)
	{
		int tmp = m % n;
		m = n;
		n = tmp;
	}

	return m;
}
int lcm(int a, int b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = b;; i = i + b)
	{
		if (i%a == 0)
			return i;
	}
}
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int a = 0, b = 0, c = 0, d = 0;
		cin >> a >> b >> c >> d;
		if (a%b != 0)
		{
			cout << -1 << ' ';
		}
		else if(gcd(a, b) != b)
		{
			cout << -1 << ' ';
		}
		else
		{

		}
	}
}