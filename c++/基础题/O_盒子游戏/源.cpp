#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long n = 0;
	while (cin>>n&&n!=0)
	{
		if (log2(n + 1) == (unsigned long long)log2(n + 1))
			cout << "Bob" << endl;
		else
		{
			cout << "Alice" << endl;
		}
	}
	return 0;
}