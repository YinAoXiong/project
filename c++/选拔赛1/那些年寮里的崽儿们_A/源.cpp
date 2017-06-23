#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ac
{
	string a;
	int b=0;
};

int insert(ac *list, string &a,int &size)
{
	for (int i = 0; i < size; ++i)
	{
		if (list[i].a == a)
		{
			++list[i].b;
			return 0;
		}
	}
	list[size].a = a;
	++list[size].b;
	++size;
	return 0;
}
int main()
{
	int n = 0,key=0;
	while (cin>>n)
	{
		ac list[100];
		int size = 0;
		string temp;
		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			insert(list, temp, size);
		}
		
		cout << "Case " << ++key << ':' << endl;

		for (int i = 0; i < size; ++i)
		{
			cout << list[i].a << ' ' << list[i].b << endl;
		}
		
		
	}
	return 0;
}