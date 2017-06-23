#include"stdio.h"
int main()
{
	int number, a[1000],j,temp;
	printf_s("请输入数组的个数（小于1000）\n");
	scanf_s("%d", &number);
	printf_s("请输入数组\n");
	for (int i = 0; i < number; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	j = number-1;//引入一个控制变量,注意数组的地址是从0开始的所以要减一
	if (number % 2 == 0)
	{
		for (int i = 0; i < number / 2; ++i)
		{
			temp=a[i];
			a[i] = a[j];
			a[j] = temp;
			--j;
		}
	}
	else
	{
		j = number-1;
		for (int i = 0; i < (number - 1) / 2; ++i)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			--j;
		}
	}
	for (int i = 0; i < number; ++i)
	{
		printf_s("逆序数组=%d", a[i]);//输出数组逆转之后的结果
		printf_s(" ");
	}
	return 0;
}