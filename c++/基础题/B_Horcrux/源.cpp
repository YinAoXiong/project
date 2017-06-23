#include<iostream>
using namespace std;
//struct station
//{
//	int s;
//	int number;
//};
//int main()
//{
//	int n = 0;
//
//	while (cin >> n)
//	{
//		int white_number = 0;
//		station key;
//		key.number = 0;
//		key.s = 0;
//		int temp = 0;
//		for (int i = 1; i <= n; ++i)
//		{
//			cin >> temp;
//			if (temp == key.s)
//			{
//				++key.number;
//				if (temp == 0)
//					++white_number;
//			}
//			else
//			{
//				if (i % 2 == 1)
//				{
//
//					key.s = temp;
//					key.number = 1;
//					if (temp == 0)
//						++white_number;
//				}
//				else
//				{
//					key.s = temp;
//					key.number += 1;
//					if (temp == 0)
//						white_number += key.number;
//					else
//						white_number = white_number - (key.number - 1);
//				}
//			}
//			
//		}
//		cout << white_number << endl;
//
//	}
//	
//}

#define M 100005
struct soul {
	int color, num;
}a[M];
int main()
{
	int n, x, cnt;
	while (~scanf("%d", &n))
	{
		cnt = 0;
		scanf("%d", &x);
		a[cnt].color = x;
		a[cnt].num = 1;
		for (int i = 2; i <= n; i++)
		{
			scanf("%d", &x);
			if (x == a[cnt].color)
				a[cnt].num++;
			else
			{
				if (i & 1)  //当前位置为奇数
				{
					cnt++;
					a[cnt].color = x;
					a[cnt].num = 1;
				}
				else
				{
					a[cnt].num++;
					a[cnt].color = x;
					if (cnt>0)//只有多于一种颜色，则合并
					{
						a[cnt - 1].num += a[cnt].num;
						cnt--;
					}
				}
			}
			//  printf("->>cnt=%d,a[i].color=%d\n",cnt,a[cnt].color);
		}
		x = 0;
		for (int i = 0; i <= cnt; i++)
			if (a[i].color == 0)
				x += a[i].num;
		printf("%d\n", x);
	}
	return 0;
}
