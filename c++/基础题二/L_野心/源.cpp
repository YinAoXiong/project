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
const double pi = 3.14159265358979323;
int main()
{
	double s = 0;
	while (cin>>s)
	{
		double ans=sqrt(2 * s / pi)*s / 12;
		printf("%.12f\n", ans);
	}
	return 0;
}