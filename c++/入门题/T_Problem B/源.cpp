#include<iostream>
using namespace std;

int map[1000010] = { 0 };
int caculate(int number)
{
	int sum = 0;
	while (number>0)
	{
		if (number % 10 == 1)
			++sum;
		number /= 10;
	}
	return sum;
}
void change(int &a, int &b)
{
	if (a > b)
	{
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
}
int main()
{
	for (int i = 1; i <= 1000000; ++i)
		map[i] = map[i - 1] + caculate(i);
	int a = 0, b = 0;
	while (cin>>a>>b)
	{
		change(a, b);
		cout << map[b] - map[a - 1] << endl;
	}
}