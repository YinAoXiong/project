#include"stdio.h"
int main()
{
	int number, a[1000],j,temp;
	printf_s("����������ĸ�����С��1000��\n");
	scanf_s("%d", &number);
	printf_s("����������\n");
	for (int i = 0; i < number; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	j = number-1;//����һ�����Ʊ���,ע������ĵ�ַ�Ǵ�0��ʼ������Ҫ��һ
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
		printf_s("��������=%d", a[i]);//���������ת֮��Ľ��
		printf_s(" ");
	}
	return 0;
}