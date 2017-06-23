#include<stdio.h>
#include<math.h>
int map[100][100];
int temp = 0;
void page(int x, int y, int k, int tr, int tc)
{
	int t;
	int s;
	
	if (k == 1)
	{
		return;
	}
	t = ++temp;
	s = k / 2;
	if (tr < x +s && tc < y +s)
	{
		page(x, y, s, tr, tc);
	}
	else
	{
		map[x + s-1][y + s-1] = t;
		page(x, y, s, x + s-1, y + s-1);

	}
	if (tr < x + s && tc >= y + s )
	{
		page(x, y +s , s, tr, tc);
	}
	else
	{
		map[x + s-1][y + s ] = t;
		page(x, y + s , s, x + s-1, y + s );
	}
	if (tr >= x + s  && tc < y + s)
	{
		page(x + s , y, s, tr, tc);
	}
	else
	{
		map[x + s ][y + s-1] = t;
		page(x + s, y, s, x + s , y + s-1);
	}
	if (tr >= x + s  && tc >= y + s )
	{
		page(x + s , y + s , s, tr, tc);
	}
	else
	{
		map[x + s ][y + s ] = t;
		page(x + s , y + s,s, x + s , y + s );
	}

}

int main()
{
	int k,tr,tc;
	printf_s("请输入棋盘的规格，以2^k*2^k的形式，同时输入黑块的位置\n");
	scanf_s("%d%d%d", &k, &tr, &tc);
	map[tr][tc] = 0;
	page(0, 0, k, tr, tc);
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf_s("%4d", map[i][j]);
		}
		printf_s("\n");
	}

	return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
	int a = 2;
	int b = powf(2,a-1);
	printf_s("%d", b);
}*/
