#include"stdio.h"
int main()
{
	int number;
	int a[1000], b[100];
	printf_s("请输入十进制数的个数\n");
	scanf_s("%d", &number);
	printf_s("请输入十进制数字\n");
	for (int i = 0; i < number; ++i)
	{
		scanf_s("%d", &a[i]);
		b[i] = 0;
	}
	//循环将十进制的数转换成二进制的数，并统计1的个数
	for (int i = 0; i < number; ++i)
	{
		while (a[i]>0)
		{
			b[i] += a[i] % 2;
			a[i] = a[i] / 2;
		}
	}
	for (int i = 0; i < number; ++i)
	{
		printf_s("结果=%d\n", b[i]);
	}
	return 0;
}