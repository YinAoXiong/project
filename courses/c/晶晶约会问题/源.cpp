#include"stdio.h"
int main()
{
	int begin, end, result;
	scanf_s("%d%d", &begin,&end);//输入开始的数，和结束的数
	if (begin > end || end > 300)//判断输入是否符合条件
	{
		printf_s("your input is wrong");
	}
	//将输入分为3类，分别计算
	else if ((begin % 2 == 1) && (end % 2 == 1))//第一类，全为奇数
	{
		result = (begin + end)  * (end - begin + 2) / 4;
		printf_s("%d", result);
	}
	else if ((begin % 2 == 0) && (end % 2 == 0))//第二类，全为偶数
	{
		result = (begin + end)*(end - begin) / 4;
		printf_s("%d", result);
	}
	else//如果两边既有奇数也有偶数

	{
		if (begin % 2 == 1)
			result = (begin + end - 1) *(end - begin + 1)/2;
		printf_s("%d", result);
	}
	return 0;

}