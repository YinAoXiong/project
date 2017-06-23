#include<iostream>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		double a = 0, b = 0, c = 0, h = 0, x = 0;
		cin >> a >> b >> c >> h >> x;
		if (1 / a > 2 / b && 1 / a > 5 / c)
		{
			cout << h*a << ' ' << x / a << endl;
		}
		else if (2 / b > 1 / a && 2 / b > 5 / c)
		{

			cout << h*b / 2 + (int)h % 2 * a << ' ';
			x = x - h*b / 2 + (int)h % 2 * a;
			int temp = h;
			while (x > 0)
			{
				if (x > b)
				{
					temp += 2;
					x -= b;
				}
				else
				{
					temp += 1;
					x -= a;
				}
			}
			cout << temp << endl;


		}
		else if (5 / c > 2 / b && 5 / c > 1 / a)
		{
			int time = 0;
			while (h>0)
			{
				if (h > 5)
				{
					time += c;
					h -= 5;
				}
				else if (h > 2)
				{
					time += b;
					h -= 2;
				}
				else
				{
					time += a;
					h -= 1;
				}
			}
			cout << time << ' ';
			x -= time;
			int code = 0;
			while (x>0)
			{
				if (x > c)
				{
					code += 5;
					x -= c;
				}
				else if (x > b)
				{
					code += 2;
					x -= b;
				}
				else if(x>a)
				{
					code += 1;
					x -= a;
				}
			}
			cout << h + code << endl;
		}


	}
}