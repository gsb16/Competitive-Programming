//Problema Cersei - busca ternaria 

#include <bits/stdc++.h>
#include <math.h>

int n, xfin;
int escx[50000], escy[50000];

//funcao que da o esconderijo mais longe de um dado ponto
double maislonge(double xfuga)
{
	double distmax = 0;
	double dist;

	for (int i = 0; i < n; ++i)
	{
		dist = sqrt((escx[i] - xfuga)*(escx[i] - xfuga) + escy[i]*escy[i]);

		if (distmax <= dist)
		{
			distmax = dist;
		}
	}

	return distmax;
}

int main()
{
	scanf("%d %d", &n, &xfin);
	for (int i = 0; i < n; ++i)
		{
			scanf("%d %d", &escx[i], &escy[i]);
		}

	double a, a0, b, b0;

	a = 0;
	b = xfin;

	for (int j = 0; j <= 201; ++j)
	{
		a0 = a + ((b - a)/3);
		b0 = b - ((b - a)/3);	
	

		//seleciona o primeiro ou o segundo terco
		if (maislonge(a0) >= maislonge(b0))
		{
			a = a0;
		}
		else
		{
			b = b0;
		}
	}

	printf("%.2f %.2f\n", a0, maislonge(a0));

	return 0;
}
