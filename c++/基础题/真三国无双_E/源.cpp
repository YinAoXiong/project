#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		double a = 0, b = 0, d = 0;
		cin >> a >> b >> d;
		double c = (a + b - d) / 10;
		if (c >= 0 && c < 360 && d >= b)  //注意角度的限制
		{
			printf("%.2f\n", c);
		}
		else if(c<0)
		{
			cout << "0.00" << endl;
		}
		else
		{
			cout<< "IMPOSSIBLE" << endl;
		}
		
	}
	return 0;
}