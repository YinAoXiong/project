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
	int t = 0;
	cin >> t;
	while (t--)
	{
		int px = 0, py = 0, ax = 0, ay = 0, bx = 0, by = 0;
		cin >> px >> py >> ax >> ay >> bx >> by;
		if (px > min(ax, bx) && px< max(ax, bx) && py>min(ay, by) && py < max(ay, by))
			cout << "Inside" << endl;
		else if (px<min(ax, bx) || px>max(ax, bx) || py<min(ay, by) || py>max(ay, by))
		{
			cout << "Outside" << endl;
		}
		else
			cout << "On" << endl;
	}
	return 0;
}