#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;
double caculate(double x, double y)
{
	return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * x*x - y*x;
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int y = 0;
		scanf("%d", &y);
		double ESP = 1e-6;
		double high = 1000, low = 0, mid, midmid, cmid, cmidmid;

		while (low + ESP<high)
		{
			mid = (low + high) / 2;
			midmid = (mid + high) / 2;
			cmid = caculate(mid, y);
			cmidmid = caculate(midmid, y);
			if (cmid<cmidmid)
				high = midmid;
			else
				low = mid;
		}


		printf("%.4lf\n", cmid);
	}
	return 0;
}
