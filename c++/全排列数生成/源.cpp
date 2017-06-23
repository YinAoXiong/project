#include<iostream>
#include<string>
using namespace std;
void iswap(string& the_array, int a, int b)
{
	char temp;
	temp = the_array[a];
	the_array[a] = the_array[b];
	the_array[b] = temp;

}
int p(string& the_array, int key, int n)
{
	static int number;
	if (key==n-1)
	{
		cout << the_array<<endl;
		 ++number;
	}
	else
	{
		p(the_array, key + 1, n);
		for (int i = key + 1; i < n; ++i)
		{
			
			iswap(the_array, key, i);
			p(the_array, key + 1, n);
			iswap(the_array, key, i);             //换回去，以免后面的递归调用影响下一次循环
		}
	}
	return number;
}
int main()
{
	int n = 0;
	cout << "please input the size of the array:";
	cin >> n;
	string the_array;
	cin >> the_array;
	cout << endl;
	cout<<p(the_array, 0, n);
	return 0;
}

