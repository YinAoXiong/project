#include"stdio.h"
int main()
{
	printf_s("请输入培养皿的个数");
	int n;
	scanf_s("%d", &n);
	int id[1000];
	float fanzhilu[1000];
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		scanf_s("%d%d%d", &id[i], &a, &b);
		fanzhilu[i] = (float)b / a;

	}
	//对细菌进行排序
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (fanzhilu[j] < fanzhilu[j + 1])
			{
				float temp = fanzhilu[j];
				fanzhilu[j] = fanzhilu[j + 1];
				fanzhilu[j + 1] = temp;
				int temps = id[j];
				id[j] = id[j + 1];
				id[j + 1] = temps;
				
			}
		}
	}
	//找出最大的差值并记录下下标
	int i=0;
	float maxdiff = 0;
	for (int j = 0; j < n - 1; ++j)
	{
		float diff = fanzhilu[j] - fanzhilu[j + 1];
		if (maxdiff < diff)
		{
			maxdiff = diff;
			i = j;
		}
	}
	printf_s("%d\n", i+1);
	for (int j = 0; j < i+1; ++j)
	{
		printf_s("a类细菌：%d\n", id[j]);
	}
	printf("%d\n", n - i-1);
	for (int j = i+1; j < n; ++j)
	{
		printf_s("b类细菌：%d\n", id[j]);
	}
	return 0;
}
