#include<iostream>
using namespace std;
double max(double *result,int size)
{
	double max = 0;
	for (int i = 0; i < size; ++i)
		if (result[i] > max)
			max = result[i];
	return max;
}
int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		double *list = new double[n + 3];
		for (int i = 0; i < n; ++i)
			cin >> list[i];
		double result[3] = { 0 };
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i; j < n; j=j+3)
			{
				result[i] += list[j];
			}
		}
		cout << max(result, 3) << endl;
		delete[] list;
	}
}