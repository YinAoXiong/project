#include <iostream>
#include <stack>
#include <queue>
#include <stdio.h>
const int Max=1010;
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
	{
		int operate[Max];
		int data[Max];
		int station[3]={0};
		stack<int> stack1;
		queue<int> queue1;
		priority_queue<int> priority_queue1;
		for(int i=0;i<n;++i)
			scanf("%d%d",&operate[i],&data[i]);

		int key=0;
		for(int i=0;i<n;++i)
		{
			if(operate[i]==1)
				stack1.push(data[i]);
			else
			{
				if(stack1.empty()||stack1.top()!=data[i])
				{
					key=1;
					break;
				}
				else
					stack1.pop();
			}
		}
		if(key==0)
			station[0]=1;
		key=0;
		for(int i=0;i<n;++i)
		{
			if(operate[i]==1)
				queue1.push(data[i]);
			else
			{
				if(queue1.empty()||queue1.front()!=data[i])
				{
					key=1;
					break;
				}
				else
					queue1.pop();

			}
		}
		if(key==0)
			station[1]=1;
		key=0;
		for(int i=0;i<n;++i)
		{
			if(operate[i]==1)
				priority_queue1.push(data[i]);
			else
			{
				if(priority_queue1.empty()||priority_queue1.top()!=data[i])
				{
					key=1;
					break;
				}
				else
					priority_queue1.pop();
			}
		}
		if(key==0)
			station[2]=1;

		int number=0;
		for(int i=0;i<3;++i)
			if(station[i]==0)
				++number;
		if(number==3)
			printf("impossible\n");
		else if(number<2)
			printf("not sure\n");
		else if(station[0]==1)
			printf("stack\n");
		else if(station[1]==1)
			printf("queue\n");
		else if(station[2]==1)
			printf("priority queue\n");
	}
    return 0;
}
