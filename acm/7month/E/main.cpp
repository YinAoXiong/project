#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		map<double,double> ls;
		int k;
		double x, y;
		for (int i = 0; i < n; ++i)
		{
			cin >> k >> x >> y;
			if (k == 0)
			{

				if (!ls.empty() && x >= ls.begin()->first && x <= (--ls.end())->first)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}
			else if (k == 1)
			{
				ls[x] = y;
			}
			else
			{
				auto temp = ls.find(x);
				if (temp!=ls.end())
				{
					ls.erase(temp);
				}

			}
		}

	}
	return 0;
}
