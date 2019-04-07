
#include <bits/stdc++.h>

void buscatime(int atual, int total)
{
	visitado[atual] = 1;
	for (int k = 1; k <= total; ++k)
	{
		if((time[atual][k]) && (!visitado[k]))
		{
			busca(k, total);
		} 
	}
}

int main()
{
	scanf("%d %d", &alunos, &elos);
	for (int k = 1; k <= elos; ++k)
	{
		scanf("%d %d", &i, &j);
		time[i][j] = 1;
		time[j][i] = 1;
	}
	for (int a = 1; a <= alunos; ++a)
	{
		if(!visitado[a])
		{
			buscatime(a, alunos);
			ntimes++;
		}
	}
}