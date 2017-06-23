#include<iostream>
#include<algorithm>
using namespace std;
bool select(const int *a, int left, int right, int find)       //递归查找用的函数
{
	if (left >right)
		return false;
	else
	{

		if (a[(right + left) / 2] == find)
		{
			//index = (right + left) / 2;
			return true;
		}

		else if (a[(right + left) / 2] < find)
		{
			return select(a, (right + left) / 2 + 1, right, find);//, index);
		}
		else
			return select(a, left, (right + left) / 2 - 1, find);//, index);


	}
}

int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int first = 0, scend = 0;
		cin >> first >> scend;
		int *first_array = new int[first];
		int *scend_array = new int[scend];
		for (int i = 0; i < first; ++i)
		{
			cin >> first_array[i];
		}
		for (int i = 0; i < scend; ++i)
		{
			cin >> scend_array[i];
		}
		sort(first_array, first_array + first);
		sort(scend_array, scend_array + scend);
		int key = 0;
		if (first <= scend)
		{
			for (int i = 0; i < first; ++i)
			{
				if (select(scend_array, 0, scend - 1, first_array[i]))
				{
					key = 1;
					break;
				}
			}
		}
		else
		{
			for (int i = 0; i < scend; ++i)
			{
				if (select(first_array, 0, first - 1, scend_array[i]))
				{
					key = 1;
					break;
				}
			}
		}
		if (key == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}