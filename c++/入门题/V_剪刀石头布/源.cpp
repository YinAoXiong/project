#include<iostream>
using namespace std;
int number[100010];
bool panduan(int *number, int j, int size)
{
	if (number[j] == 0)
	{
		for (int i = 0; i < size; ++i)
		{
			if (i == j)
				continue;
			if (number[i] == 2)
				continue;
			else
			{
				return false;
			}
		}
	}
	else if (number[j] == 2)
	{
		for (int i = 0; i < size; ++i)
		{
			if (i == j)
				continue;
			if (number[i] == 5)
				continue;
			else
			{
				return false;
			}
		}
	}
	else
	{
		for (int i = 0; i < size; ++i)
		{
			if (i == j)
				continue;
			if (number[i] == 0)
				continue;
			else
			{
				return false;
			}
		}
	}

	return true;
}
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int N = 0;
		cin >> N;
		for (int j = 0; j < N; ++j)
		{
			cin >> number[j];
		}
		int zero = 0, two = 0, five = 0, key = 0, key1 = 0;
		int zero1 = 0, two1 = 0, five1 = 0;
		for (int j = 0; j < N; ++j)
		{
			if (number[j] == 0 && zero1 == 1)
				continue;
			else if (number[j] == 2 && two1 == 1)
			{
				continue;
			}
			else if (number[j] == 5 && five1 == 1)
				continue;
			if (number[j] == 0 && zero == 0)
			{
				++key;
				zero = 1;
			}
			else if (number[j] == 2 && two == 0)
			{
				++key;
				two = 1;
			}
			else if (number[j] == 5 && five == 0)
			{
				++key;
				five = 1;
			}
			if (key == 3)
			{
				break;
			}
			if (panduan(number, j, N))
			{
				key1 = j + 1;
				break;
			}
			else
			{
				switch (number[j])
				{
				case 0:
					zero1 = 1;
					break;
				case 2:
					two1 = 1;
					break;
				case 5:
					five1 = 1;
					break;
				}
			}
		}
		if (key1 != 0)
			cout << key1 << endl;
		else
		{
			cout << "No winner" << endl;
		}


	}
	return 0;
}