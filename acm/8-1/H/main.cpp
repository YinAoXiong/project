#include <iostream>
#include<cmath>
using namespace std;

typedef long long LL;
LL n, k;

void caculate()
{
	if (k>141420)
	{
		cout << "-1" << endl;
		return;
	}
	double sum_k = (k + 1)*k / 2;
	LL q = 0;
	LL sqr=sqrt(n);
	for (long long i = sqr; i >0; --i)
	{
		if (n%i == 0)
		{

			if (n / i >= sum_k)
            {
                q = i;
                break;
            }

		}
	}
	if (!q)
	{
		cout << "-1" << endl;
		return;
	}

	LL sum = 0;
	for (LL i = 1; i < k; ++i)
	{
		cout << i*q << ' ';
		sum += i;
	}

	cout << q*(n / q - sum) << endl;
	return;

}

int main()
{


	while (cin >> n >> k)
	{
		caculate();

	}
	return 0;
}
