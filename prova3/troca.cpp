
#include <bits/stdc++.h>

int main()
{
	int cont, mantem, n, p, troca;

	scanf("%d", &n);
	cont = 0;
	mantem = 0;
	for (int i = 0; i < n-1; ++i)
	{
		scanf("%d %d", &p, &troca);
		if (p == n)
		{
			mantem = 1;
			if (troca == 0)
			{
				cont++;
			}
		}
		if ((p != n) && (mantem == 1) && (troca == 1)) 
		{
			cont++;
		}
	}

	printf("%d\n", cont);

	return 0;
	
}