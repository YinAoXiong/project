#include<iostream>
#include<string>
using namespace std;

void shuc(int *a_s, int *a_x, int *b_s, int *b_x, int a_s_size, int a_x_size, int b_s_size, int b_x_size)
{
	for (int i = 0; i < a_s_size; ++i)
	{
		if (a_s[i] == b_s[i])
			continue;
		else if (a_s[i] < b_s[i])
		{
			cout << "Smaller" << endl;
			return;
		}
			
		else
		{
			cout << "Bigger" << endl;
			return;
		}
	}
	if (a_x_size > b_x_size)
	{
		for (int i = 0; i < b_x_size; ++i)
		{
			if (a_x[i] == b_x[i])
				continue;
			else if (a_x[i] < b_x[i])
			{
				cout << "Smaller" << endl;
				return;
			}

			else
			{
				cout << "Bigger" << endl;
				return;
			}
		}
		for (int i = b_x_size; i < a_x_size; ++i)
		{
			if (a_x[i] != 0)
			{
				cout << "Bigger" << endl;
				return;
			}
		}
	}
	else
	{
		for (int i = 0; i < a_x_size; ++i)
		{
			if (a_x[i] == b_x[i])
				continue;
			else if (a_x[i] < b_x[i])
			{
				cout << "Smaller" << endl;
				return;
			}

			else
			{
				cout << "Bigger" << endl;
				return;
			}
		}
		for (int i = a_x_size; i < b_x_size; ++i)
		{
			if (b_x[i] != 0)
			{
				cout << "Smaller" << endl;
				return;
			}
		}
	}
	cout << "Same" << endl;
	return;
}
int main()
{
	string a, b;
	int a_s[110], a_x[110], b_s[110], b_x[110];
	int key = 0;
	while (cin>>a>>b)
	{
		int a_temp = 0, b_temp = 0;
		int a_s_size = 0, a_x_size = 0, b_s_size = 0, b_x_size = 0;
		for (int i = 0; i < a.size(); ++i)
		{
			if (a[i] == '.')
			{
				a_temp = i + 1;
				break;
			}
			else
			{
				a_s[i] = (int)a[i]-48;
				++a_s_size;
			}
		}
		for (int i = a_temp; i < a.size(); ++i)
		{
			a_x[i - a_temp] = (int)a[i]-48;
			++a_x_size;
		}
		for (int i = 0; i < b.size(); ++i)
		{
			if (b[i] == '.')
			{
				b_temp = i + 1;
				break;
			}
			else
			{
				b_s[i] = (int)b[i]-48;
				++b_s_size;
			}
		}
		for (int i = b_temp; i < b.size(); ++i)
		{
			b_x[i - b_temp] = (int)b[i]-48;
			++b_x_size;
		}
		cout << "Case " << ++key << ": ";
		if (a_s_size < b_s_size)
			cout << "Smaller" << endl;
		else if (a_s_size > b_s_size)
			cout << "Bigger" << endl;
		else
		{
			shuc(a_s, a_x, b_s, b_x, a_s_size, a_x_size, b_s_size, b_x_size);
		}
	}
	return 0;
}