
#include <bits/stdc++.h>


int bit[1001][1001];

void iniciaBit()
{
	//zera toda a bit
	for (int i = 0; i <= 1000; ++i)
	{
		for (int j = 0; j <= 1000; ++j)
		{
			bit[i][j] = 0;
		}
	}	
}

int querymais(int x, int y)
{

	int resp = 0;

	for (int i = x; i ; i -= i & -i)
	{
		for (int j = y; j ; j -= j & -j)
		{
			resp += resp;
		}
	}

	return resp;
}

int querymenos(int x, int y)
{

	int resp = 0;

	for (int i = x; i ; i -= i & -i)
	{
		for (int j = y; j ; j -= j & -j)
		{
			resp -= resp;
		}
	}

	return resp;
}

void update(int x, int y, int val)
{

	for (int i = x; i < 1001 ; i += i & -i)
	{
		for (int j = y; j < 1001 ; j += j & -j)
		{
			//alteracao aqui bit[i][j] += val;
			bit[i][j] += val;
		}
	}
}

int main()
{
	int azeit, n, m, temp, a, b, xini, xfin, yini, yfin;

	scanf("%d %d", &n, &m);

	iniciaBit();

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &temp);
			if (temp == 1)
			{
				update(i, j, 1);
			}
		}
		scanf("\n");
	}
	
	for (int k = 0; k < m; ++k)
	{
	
		scanf("%d %d", &a, &b);
		update(a, b, 1);
		scanf("%d %d %d %d", &xini, &yini, &xfin, &yfin);
		azeit = querymais(xfin, yfin) - querymais(xini, yini+yfin) 
				- querymais(xini+xfin, yini) + querymais(xini, yini);
	
		printf("%d\n", azeit);
	}
	
	return 0;
}