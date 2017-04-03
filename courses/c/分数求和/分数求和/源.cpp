#include<stdio.h>
int main()
{
	int n;//输入分数的个数
	printf_s("请输入分数的个数\n");
	scanf_s("%d", &n);
	int sumn = 0, sunb = 1;//sumn sunb分别表示分子分母之和
	while (--n)
	{
		
		int z, m;
		char s[20];
		printf_s("请输入要计算的分数\n");
		scanf_s("%d%c%d", &z,&s,20,&m);
		sumn = sumn*m + sunb*z;
		sunb = m*sunb;
	}
	//进行通分之后，求最大公因数，进行约分
	int temp;
	while (sumn!=0)
	{
		temp = sumn; sumn = sunb%sumn; sunb = temp;
	}
	int max = temp;
	sumn /= max;
	sunb /= max;
	printf_s("%d/%d", sumn, sunb);
	return 0;

}