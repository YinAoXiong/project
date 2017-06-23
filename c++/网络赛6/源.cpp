//#include<iostream>
//#include<algorithm>
//using namespace std;
//int the_array[1000000];
//int main()
//{
//	int n = 0, k = 0;
//	while (cin >> n >> k)
//	{
//		for (int i = 0; i < n; ++i)
//			cin >> the_array[i];
//		for (int i = 0; i < k; ++i)
//		{
//			int key = i;
//			for (int j = n-1; j >i; --j)
//			{
//				if (the_array[j] < the_array[key])
//					key = j;
//			}
//			if (key != i)
//			{
//				int temp = the_array[i];
//				the_array[i] = the_array[key];
//				the_array[key] = temp;
//			}
//		}
//		cout << the_array[k - 1] << endl;
//
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	a = (double)1 / 2;
	cout << a;
}