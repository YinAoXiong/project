#include<stdio.h>
int main()
{
	int n;//��������ĸ���
	printf_s("����������ĸ���\n");
	scanf_s("%d", &n);
	int sumn = 0, sunb = 1;//sumn sunb�ֱ��ʾ���ӷ�ĸ֮��
	while (--n)
	{
		
		int z, m;
		char s[20];
		printf_s("������Ҫ����ķ���\n");
		scanf_s("%d%c%d", &z,&s,20,&m);
		sumn = sumn*m + sunb*z;
		sunb = m*sunb;
	}
	//����ͨ��֮�����������������Լ��
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