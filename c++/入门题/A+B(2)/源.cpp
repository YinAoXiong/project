//#include<iostream>
//using namespace std;
//int main()
//{
//	double a = 0, b = 0,c=0;
//	while (cin>>a>>b)
//	{
//		c = a + b;
//		printf("%.4lf\n", c);
//	}
//}
//
#include<iostream>
using namespace std;
int main()
{
	long long a = 1, b = 1, c = 0;
	while (cin >> a >> b&&(a!=0||b!=0))
	{
		c = a + b;
		cout << c<<endl;
	}
}

