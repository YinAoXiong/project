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
	string s;
	while (cin>>s)
	{
		int s1 = 0, s2 = 0, s3 = 0;
		for(int i=0;i<s.size();++i)
			switch (s[i])
			{
			case '1':
				++s1;
				break;
			case '2':
				++s2;
				break;
			case '3':
				++s3;
				break;
			}
		for (int i = 0; i < s2; ++i)
			cout << 2;
		for (int i = 0; i < s1; ++i)
			cout << 1;
		for (int i = 0; i < s3; ++i)
			cout << 3;
		cout << endl;
	}
	return 0;
}