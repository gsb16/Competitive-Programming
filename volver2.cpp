#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, count;
	char *v;

	scanf("%d", &n);
	while (n)
	{
		count = 0;
		scanf("%s", v);
		for (int i = 0; i < n; ++i)
		{
			
			if (v[i] == 'D')
			{
				count++;
			}
			else
			{
				count--;
			}
		}
		count += abs(count)*4;
		if (count%4 == 0)
		{
			printf("N\n");
		}
		if (count%4 == 1)
		{
			printf("L\n");
		}
		if (count%4 == 2)
		{
			printf("S\n");
		}
		if (count%4 == 3)
		{
			printf("O\n");
		}
		
		scanf("%d", &n)	;
	}
	return(0);
}