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
struct m
{
	int a;
	int b;
};
//数列合并
void mergearray(m a[], int first, int mid, int last, m temp[])
{
	int i = first, j = mid + 1;
	int m = mid, n = last;
	int k = 0;

	while (i <= m && j <= n)
	{
		if (a[i].a <= a[j].a)
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}

	while (i <= m)
		temp[k++] = a[i++];

	while (j <= n)
		temp[k++] = a[j++];

	for (i = 0; i < k; i++)
		a[first + i] = temp[i];
}
void mergesort(m a[], int first, int last, m temp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergesort(a, first, mid, temp);    //左边有序  
		mergesort(a, mid + 1, last, temp); //右边有序  
		mergearray(a, first, mid, last, temp); //再将二个有序数列合并  
	}
}
int main()
{
	int s;
	while (cin >> s)
	{
		m *list = new m[s + 2];
		m *result = new m[s + 2];
		for (int i = 0; i < s; ++i)
			cin >> list[i].a >> list[i].b;
		mergesort(list, 0, s - 1, result);
		for (int i = 0; i < s; ++i)
			cout << result[i].a << ' ' << result[i].b << endl;
	}
	return 0;
}