#include"stdio.h"
int main()
{
	int number;
	int a[1000], b[100];
	printf_s("������ʮ�������ĸ���\n");
	scanf_s("%d", &number);
	printf_s("������ʮ��������\n");
	for (int i = 0; i < number; ++i)
	{
		scanf_s("%d", &a[i]);
		b[i] = 0;
	}
	//ѭ����ʮ���Ƶ���ת���ɶ����Ƶ�������ͳ��1�ĸ���
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
		printf_s("���=%d\n", b[i]);
	}
	return 0;
}