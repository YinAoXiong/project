#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int the_array[100][3] = { 0 };
		int N = 0;
		int isthegod = 0, notthegod = 0;
		cin >> N;
		for (int i = 0; i < N; ++i)
		{
			cin >> the_array[i][0] >> the_array[i][1] >> the_array[i][2];
		}
		for (int i = 0; i < N; ++i)
		{
			if (the_array[i][0] < 8)
				++notthegod;
			if (the_array[i][0] - 7 * the_array[i][1] > 7)
				++isthegod;
		}
		cout << isthegod << ' ' << notthegod << endl;
	}
}