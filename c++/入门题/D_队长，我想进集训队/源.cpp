#include<iostream>
using namespace std;
int main()
{
	int time = 0;
	cin >> time;
	for (int i = 0; i < time; ++i)
	{
		char sex = ' ';
		int x1 = 0, x2 = 0, x3 = 0, n = 0, m = 0,sum=0;
		cin >> sex;
		cin >> x1 >> x2 >> x3 >> n >> m;
		if (sex == 'm')
		{
			sum = x1 + 2 * x2 + 5 * x3 + n + m;
			if (sum >= 90)
				cout << "Welcome" << endl;
			else
			{
				cout << 90 - sum << endl;
			}
		}
		else
		{
			sum = x1 + 2 * x2 + 5 * x3 + n + m;
			if (sum >= 60)
				cout << "Welcome" << endl;
			else
			{
				cout << 60 - sum << endl;
			}
		}
	}
}