#include<iostream>
#include<algorithm>
using namespace std;
struct meeting
{
	int start;
	int end;
	bool operator <(const meeting &a)const
	{
		if (end == a.end)
			return start > a.start;
		else
		{
			return end < a.end;
		}
	}
};


int main()
{
	int n = 0;
	while (cin>>n)
	{
		meeting *list = new meeting[n+10];
		for (int i = 0; i < n; ++i)
		{
			cin >> list[i].start >> list[i].end;
		}
		sort(list, list + n);
		int number = 1;
		int key = 0;
		for (int i = 1; i < n; ++i)
		{
			if (list[i].start >list[key].end)
			{
				++number;
				key = i;
			}
		}
		cout << number << endl;
		delete[] list;
	}
	return 0;
}