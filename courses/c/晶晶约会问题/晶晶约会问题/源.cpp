#include"stdio.h"
int main()
{
	int begin, end, result;
	scanf_s("%d%d", &begin,&end);//���뿪ʼ�������ͽ�������
	if (begin > end || end > 300)//�ж������Ƿ��������
	{
		printf_s("your input is wrong");
	}
	//�������Ϊ3�࣬�ֱ����
	else if ((begin % 2 == 1) && (end % 2 == 1))//��һ�࣬ȫΪ����
	{
		result = (begin + end)  * (end - begin + 2) / 4;
		printf_s("%d", result);
	}
	else if ((begin % 2 == 0) && (end % 2 == 0))//�ڶ��࣬ȫΪż��
	{
		result = (begin + end)*(end - begin) / 4;
		printf_s("%d", result);
	}
	else//������߼�������Ҳ��ż��

	{
		if (begin % 2 == 1)
			result = (begin + end - 1) *(end - begin + 1)/2;
		printf_s("%d", result);
	}
	return 0;

}