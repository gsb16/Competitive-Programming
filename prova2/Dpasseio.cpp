#include <bits/stdc++.h>

int vis[42][1602][1602];
int valever[42], valeama[42];
int natrac;

int visita(int pos, int verdes, int amarelos)
{
	int entra, naoentra;

	if(pos >= natrac)
	{
		return 0;
	}
	if(vis[pos][verdes][amarelos] != -1)
	{
		return vis[pos][verdes][amarelos];
	}
	naoentra = visita(pos + 1, verdes, amarelos);
	if((verdes+valever[pos] >= 0) && (amarelos+valeama[pos] >= 0))
	{
		entra = visita(pos + 1, (verdes+valever[pos]), (amarelos+valeama[pos])) +1;
		vis[pos][verdes][amarelos] = std::max(entra, naoentra); 
	}
	else
	{
		vis[pos][verdes][amarelos] = naoentra;
	}
	return vis[pos][verdes][amarelos];
}

int main()
{
	int verdes, amarelos;

	for (int i = 0; i < 42; ++i)
	{
		for (int k = 0; k < 1602; ++k)
		{
			for (int g = 0; g < 1602; ++g)
			{
				vis[i][k][g] = -1;
			}
		}
	}
	
	scanf("%d", &natrac);
	scanf("%d %d", &verdes, &amarelos);	
	for (int i = 0; i < natrac; ++i)
	{
		scanf("%d %d", &valever[i], &valeama[i]);
	}
	printf("%d\n", visita(0, verdes, amarelos));
	return 0;
}	