#include"stdio.h"
int main()
{
	int n, x, y, left;
	printf_s("�������й�ƻ���Ĳ���\n");
	scanf_s("%d%d%d", &n, &x, &y);
	left = n - (y / x + 1);
	printf_s("ʣ��ƻ����%d", left);
}