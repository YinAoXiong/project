//#include<iostream>
//using namespace std;
//int a[200005][2];
//int main()
//{
//	int number = 0;
//	while (cin >> number)
//	{
//
//		int *b = new int[number + 3];
//		for (int i = 0; i < number; ++i)
//			cin >> a[i][0] >> a[i][1];
//		int id = 0;
//		for (int i = 0; i < number; ++i)
//		{
//			int key = 0;
//			for (int j = 0; j < number; ++j)
//			{
//				if (i == j)
//					continue;
//				if ((a[i][0] - a[j][0] <= 0) && (a[i][1] - a[j][1] <= 0) && (a[i][0] - a[j][0] != 0 || a[i][1] - a[j][1] != 0))
//				{
//					key = 1;
//					break;
//				}
//			}
//			if (key == 0)
//				b[id++] = i;
//
//		}
//		for (int i = 0; i < id-1; ++i)
//			cout << b[i]+1<<' ';
//		cout << b[id - 1]+1 << endl;
//
//	}
//}
#include<iostream>
using namespace std;
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
		int key = 0;
		for (int i = 0; i < first; ++i)
		{
			for (int j = 0; j < scend; ++j)
			{
				if (first_array[i] == scend_array[j])
				{
					key = 1;
					break;
				}
			}
			if (key == 1)
				break;
		}
		if (key == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
			
	}
}