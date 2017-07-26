#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int w,h,n;
	while(cin>>w>>h>>n)
	{
		set<int> wi,hi;
		multiset<int> wl,hl;
		wi.insert(0);
		hi.insert(0);
		wi.insert(w);
		hi.insert(h);
		wl.insert(w);
		hl.insert(h);
		char key;
		int value;
		for(int i=0;i<n;++i)
		{
			cin>>key>>value;
			if(key=='H')
			{
				hi.insert(value);
				set<int>::iterator it=hi.find(value);
				int length=(*(it+1))-(*(it-1));
				hl.erase(hl.find(length));
				hl.insert(*it-*(it-1));
				hl.insert(*(it+1)-*it);

			}
			else
			{
				wi.insert(value);
				set<int>::iterator it=wi.find(value);
				int length=(*(it+1))-(*(it-1));
				wl.erase(wl.find(length));
				wl.insert(*it-*(it-1));
				wl.insert(*(it+1)-*it);
			}
			cout<<(*(wl.end()-1))*(*(hl.end()-1))<<endl;
		}
	}
    return 0;
}
