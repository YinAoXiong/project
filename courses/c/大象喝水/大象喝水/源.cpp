#include"stdio.h"
int main()
{
	int r, h,time;
	printf_s("������Ͱ�Ĳ���\n");
	scanf_s("%d%d", &r, &h);
	time = 20000 / (r*r*h*3.14159) + 1;
	printf_s("Ͱ����%d", time);
}