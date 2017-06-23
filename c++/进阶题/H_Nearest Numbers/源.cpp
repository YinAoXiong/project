#include<algorithm>
#include <iostream>  
using namespace std;
unsigned long long caculate(unsigned long long a, unsigned long long b, unsigned long long c)
{
	return (a - b)*(a - b) + (b - c)*(b - c) + (c - a)*(c - a);
}
int main()
{
    long long a = 0, b = 0, c = 0;
	while (cin>>a>>b>>c)
	{
		unsigned long long *la = new unsigned long long[a + 2];
		unsigned long long *lb = new unsigned long long[b + 2];
		unsigned long long *lc = new unsigned long long[c + 2];
		for (int i = 0; i < a; ++i)
			cin >> la[i];
		for (int i = 0; i < b; ++i)
			cin >> lb[i];
		for (int i = 0; i < c; ++i)
			cin >> lc[i];
		unsigned long long ans = ((unsigned long long)1<<sizeof(unsigned long long)*8-1);
		unsigned long long i = 0, j = 0, k = 0;
		while (i<a&&j<b&&k<c&&ans>0)
		{
			ans = min(ans, caculate(la[i], lb[j], lc[k]));
			if (caculate(la[i + 1], lb[j], lc[k]) < caculate(la[i], lb[j + 1], lc[k]) && caculate(la[i + 1], lb[j], lc[k]) < caculate(la[i], lb[j], lc[k + 1]))
				++i;
			else if (caculate(la[i], lb[j + 1], lc[k]) < caculate(la[i], lb[j], lc[k + 1]))
				++j;
			else
				++k;
		}
		cout << ans << endl;
		delete[] la;
		delete[] lb;
		delete[] lc; 
	}
	return 0;
}