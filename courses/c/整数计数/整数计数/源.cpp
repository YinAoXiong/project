#include"stdio.h"
int main()
{
	int number;
	int number5=0,number1=0,number10=0;
	 int a[100];
	 printf_s("�����������ĸ���\n");
	 scanf_s("%d", &number);
	 printf_s("������С��ʮ������\n");
	 for (int i = 0; i < number; ++i)
	 {
		 scanf_s("%d", &a[i]);
	 }
	 for (int i = 0; i < number; ++i)
	 {
		 if (a[i]==1)
		 {
			 ++number1;
		 }
		 else if (a[i]==5)
		 {
			 ++number5;
		 }
		 else if (a[i]==10)
		 {
			 ++number10;
		 }
	 }
	 printf_s("����1=%d\n,����5=%d\n,����10=%d\n", number1, number5, number10);//������
	 return 0;



}