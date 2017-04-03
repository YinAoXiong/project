#include"stdio.h"
int main()
{
	int i = 0,j,c;
	while ( (c = getchar() )!= EOF)
	{
		if (c != ' ' &&c != '\n'&&c!='\t')
		{
			++i;
		}
		else
		{
			for (j = 0; j < i; ++j)
				printf("*");
			printf("\n");
			i = 0;


		}
	}
	return 0;
}