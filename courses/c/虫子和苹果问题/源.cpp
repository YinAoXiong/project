#include"stdio.h"
int main()
{
	int n, x, y, left;
	printf_s("请输入有关苹果的参数\n");
	scanf_s("%d%d%d", &n, &x, &y);
	left = n - (y / x + 1);
	printf_s("剩余苹果：%d", left);
}