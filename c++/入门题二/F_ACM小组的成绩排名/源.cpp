#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <bitset>  
#include <algorithm>  
#include <functional>  
#include <numeric>  
#include <utility>  
#include <complex>  
#include <sstream>  
#include <iostream>  
#include <iomanip>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cstring>  
#include <ctime>  
#include <cassert>  
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		double *list = new double[n + 1];
		for (int i = 0; i < n; ++i)
			cin >> list[i];
		double big1 = list[0], big2 = list[0], big3 = list[0];
		for (int i = 0; i < n; ++i)
		{
			if (list[i] > big1)
			{
				big3 = big2;
				big2 = big1;
				big1 = list[i];
			}
			else if (list[i] > big2)
			{
				big3 = big2;
				big2 = list[i];
			}
			else if (list[i] > big3)
				big3 = list[i];
		}
		printf("%.2f %.2f %.2f\n", big1, big2, big3);
	}
	return 0;
}