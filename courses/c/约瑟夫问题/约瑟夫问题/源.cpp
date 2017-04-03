#include<stdio.h>

int main()
{
	int s[300];
	int p[300];

	int n, m;
	
	while (true)
	{
		scanf_s("%d%d", &n, &m);
		if (n == 0 && m == 0)
			break;
		for (int i = 0; i < n - 1; i++)
		{
			s[i] = i + 1;
			p[i + 1] = i;
		}
		s[n - 1] = 0;
		p[0] = n - 1;
		int current = 0;
		while (true)
		{
			for (int count = 0; count < m - 1; count++)
			{
				current = s[current];
			}
			int pre = p[current];
			int suc = s[current];
			s[pre] = suc;
			p[suc] = pre;
			if (pre == suc)
			{
				printf_s("%d\n", pre + 1);
				break;
			}
			current = suc;


		}
	}
	return 0;
}