#include"stdio.h"
int main()
{
	int r, h,time;
	printf_s("请输入桶的参数\n");
	scanf_s("%d%d", &r, &h);
	time = 20000 / (r*r*h*3.14159) + 1;
	printf_s("桶数：%d", time);
}