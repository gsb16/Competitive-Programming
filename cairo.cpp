//Problema Mercado do Cairo - BIT 2D

#include <bits/stdc++.h>

int xbarr[100001], ybarr[100001];
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

int MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int query(int x, int y)
{
	//retorna o valor máximo
	//para conseguir o somatorio, a implementacao eh diferente
	//usa += ao inves de MAX

	int resp = 0;

	for (int i = x; i ; i -= i & -i)
	{
		for (int j = y; j ; j -= j & -j)
		{
			resp = MAX(bit[i][j] , resp);
		}
	}

	return resp;
}

void update(int x, int y, int val)
{
	//atualiza com o valor máximo
	//para conseguir o somatorio, a implementacao eh diferente
	//usa += ao inves de MAX

	for (int i = x; i < 1001 ; i += i & -i)
	{
		for (int j = y; j < 1001 ; j += j & -j)
		{
			//alteracao aqui bit[i][j] += val;
			bit[i][j] = MAX(bit[i][j] , val);
		}
	}
}


int main()
{
	int vendas, inst, temp, n;
	
	scanf("%d", &inst);
	
	for (int i = 0; i < inst; ++i)
	{
		iniciaBit();
	
		scanf("%d", &n);
		
		for (int j = 0; j < n; ++j)
		{
			scanf("%d %d", &xbarr[j], &ybarr[j]);
		}

		//fazendo as contas da bit
		for (int j = 0; j < n; ++j)
		{
			temp = 1 + query(xbarr[j], ybarr[j]);
			update(xbarr[j], ybarr[j], temp);
		}

		//fazer a query na bit inteira
		vendas = query(1000, 1000);
		printf("%d\n", vendas);
	}
	
	return 0;
}