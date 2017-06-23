#include<iostream>
#include<algorithm>
using namespace std;
double list[200000];
int main()
{
	int n = 0;
	while (cin >> n)
	{
		for (int i = 0; i < 2 * n; ++i)
			cin >> list[i];
		sort(list, list + 2 * n);
		cout << list[n-1] << endl;
	}
}