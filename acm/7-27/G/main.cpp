#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void decode(string &a)
{
	int begin=0,end=0;
}
int length(int number)
{
	int length=0;
	while(number>0)
	{
		number/=10;
		++length;
	}
	return length;
}
bool is_number(char s)
{
	if(s>47&&s<58)
		return true;
	else
		return false;
}

string::iterator rfind(const string a)
{
	for(auto i=a.end()-1;i!=a.begin())
	{
		if(*i==')')
			return i;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		for(auto i=a.begin();i!=a.end();++i)
		{
			if(*i=='(')
				if(i==a.begin()||!is_number(*(i-1)))
			{
				a.erase(i);
				a.erase(rfind(a));
			}
		}
		while(true)
		{
			int index=0,key=1;
			for(int i=0;i<a.size();++i)   //查找第一个数字
			{
				if(a[i]>47&&a[i]<58)
				{
					index=i;
					key=0
				}
			}
			if(key)   //没有数字转换结束
				break;
			else
			{
				int number=atoi(a.c_str());//获取数字
				int l_size=length(number);
				if(a[index+l_size]!='(')
				{
					a.replace(index+l_size,index+l_size,number,a[index+l_size])
				}
				else
				{

				}

			}
		}

	}
    return 0;
}
