#include<iostream>
#include<string>
using namespace std;
int main()
{
	string puzzle;
	while (cin>>puzzle)
	{
		int t = 0,sum=0;
		for (int i = 0; i < puzzle.size(); ++i)
		{
			t = i % 3;
			switch (t)
			{
			case 0:
				if (puzzle[i] != 'P')
					++sum;
				break;
			case 1:
				if (puzzle[i] != 'E')
					++sum;
				break;
			case 2:
				if (puzzle[i] != 'R')
					++sum;
				break;
			}
		}
		cout << sum << endl;
	}
}
