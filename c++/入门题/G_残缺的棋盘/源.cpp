#include<iostream>
using namespace std;
int min(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int r1 = 0, c1 = 0, r2 = 0, c2 = 0, r3 = 0, c3 = 0;
	int key = 0;
	while (cin >> r1 >> c1 >> r2 >> c2 >> r3 >> c3)
	{
		cout << "Case " << ++key << ": ";
		if ((abs(r2 - r1) == abs(c2 - c1) && abs(r3 - r1) == abs(c3 - c1)&& abs(r3 - r2) == abs(c3 - c2)) && (r3 > min(r1, r2) && r3 < max(r1, r2)))
		{
			cout << abs(r2 - r1) + 1 << endl;
		}
		
		else
		{
			cout << max(abs(r2 - r1), abs(c2 - c1)) << endl;
		}


	}
}