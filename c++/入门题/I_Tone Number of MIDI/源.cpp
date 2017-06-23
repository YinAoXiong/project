#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int time = 0;
	double f = 0,t=0,temp=0;
	cin >> time;
	for (int i = 0; i < time; ++i)
	{
		cin >> f;
		t = 12.0*log2(f / 440) + 69.0;
		temp = (int)t;
		if (t - temp < 0.5)
			cout << temp << endl;
		else
		{
			cout << temp + 1 << endl;
		}
	}
}