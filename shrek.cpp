//Problema Shrek - busca binaria

#include <bits/stdc++.h>
#include <math.h>

#define EPS 1e-7

int compara(double a, double b)
{
	if(fabs(a-b) < EPS)	return 0;
		
	return (a < b ? -1 : 1);
}


int main()
{
	int pontos, pini, pmei, pfin; 
	double xsh, ysh, vsh, vci, x0, y0, xf, yf, xresp, yresp, tmin;
	double xp[50050], yp[50050], tempo[50050];

	scanf("%d\n", &pontos);
	scanf("%lf %lf\n", &xsh, &ysh);
	for (int i = 1; i <= pontos; ++i)
	{
		scanf("%lf %lf\n", &xp[i], &yp[i]);
	}
	scanf("%lf %lf", &vsh, &vci);

	tempo[1] = 0;
	for ( int i = 2; i <= pontos; ++i)
	{
		tempo[i] = tempo[i-1] + (sqrt((xp[i] - xp[i-1])*(xp[i] - xp[i-1])
				+ (yp[i] - yp[i-1])*(yp[i] - yp[i-1])))/vci;
	}

	if (compara((tempo[pontos]), (sqrt((xp[pontos] - xsh)*(xp[pontos] - xsh)
				+ (yp[pontos] - ysh)*(yp[pontos] - ysh))/vsh)) == -1)
	{
		printf("impossivel");
		printf("\n");
	}
	
	//busca pelo ponto de menor tempo
	else
	{
		pini = 1;		
		pfin = pontos;
		//as duas variaveis sao inteiras entao a divisao resulta em inteiro
		pmei = (pini + pfin)/2;

		while (pini < pfin)
		{
			if (compara((tempo[pmei]), (sqrt((xp[pmei] - xsh)*(xp[pmei] - xsh)
				+ (yp[pmei] - ysh)*(yp[pmei] - ysh))/vsh)) != -1)
			{
				pfin = pmei;
			}
			else
			{
				pini = pmei + 1;
			}
			//as duas variaveis sao inteiras entao a divisao resulta em inteiro
			pmei = (pini + pfin)/2;
		}
		
		//se alcanca naquele ponto, alcanca em todos depois dele
		//procurar entre o primeiro ponto que alcanca e o ultimo que nao alcanca

		x0 = xp[pmei - 1];
		y0 = yp[pmei - 1];
		xf = xp[pmei];
		yf = yp[pmei];

		//lembrar que eh 87 por conta do conceito de granularidade e precisao discutidos em sala
		for (int j = 0; j <= 87; ++j)
		{
			//valor da primeira coordenada mais incremento de metade da distancia
			xresp = x0 + (xf - x0)/2;
			yresp = y0 + (yf - y0)/2;

			if (compara((tempo[pmei-1] + sqrt((xp[pmei-1] - xresp)*(xp[pmei-1] - xresp)
				+ (yp[pmei-1] - yresp)*(yp[pmei-1] - yresp))/vci), (sqrt((xresp - xsh)*(xresp - xsh)
				+ (yresp - ysh)*(yresp - ysh))/vsh)) == -1)
			{
				//nao alcanca ali
				x0 = xresp;
				y0 = yresp;
			}
			else
			{
				//alcancou
				xf = xresp;
				yf = yresp;
			}
		}
		
		tmin = (sqrt((xresp - xsh)*(xresp - xsh)
				+ (yresp - ysh)*(yresp - ysh))/vsh);

		//imprime um real arredondado com 2 casas decimais
		printf("%.2f\n", tmin);
	}

	return 0;
}