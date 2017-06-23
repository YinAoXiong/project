#include<iostream>
using namespace std;
int main()
{
	long long a = 0, b = 0;
	while (cin>>a>>b)
	{
		long long sum=0;
		if (a <= b)
		{
			for (int i = a; i <= b; ++i)
			{
				long long temp = i;
				while (temp>0)
				{
					if (temp % 10 == 1)
						++sum;
					temp /= 10;
				}
			}
		}
		else
		{
			for (int i = b; i <= a; ++i)
			{
				long long temp = i;
				while (temp>0)
				{
					if (temp % 10 == 1)
						++sum;
					temp /= 10;
				}
			}
		}
		
		cout << sum << endl;
	}
	return 0;
}