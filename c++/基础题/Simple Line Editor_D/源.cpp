#include<iostream>
#include<string>
using namespace std;
int find_last(string &line)
{
	for (int i = line.size()-1; i >= 0; --i)
	{
		if (line[i] == '@')
			return i;
	}
	return -1;
}

char reall_line[20000];
int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		string line;
		cin >> line;
		int begin = find_last(line)+1;
		int r_line_size = 0;
		for (int j = begin; j < line.size(); ++j)
		{
			if (line[j] != '#')
			{
				reall_line[r_line_size] = line[j];
				++r_line_size;
			}
			else
			{
				if (r_line_size-1 >= 0)
				{
					--r_line_size;
				}
				
			}
			
		}
		for (int j = 0; j < r_line_size; ++j)
			cout << reall_line[j];
		cout << endl;
		
	}
}