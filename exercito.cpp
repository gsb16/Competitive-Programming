#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
int S, B, maxL, maxR, L, R;
int exerc[4][100010];

	scanf("%d %d", &S, &B);
	while((S != 0) && (B != 0))
	{
		scanf("%d %d", &L, &R);
		maxL = L;
		maxR = R;
		exerc[0][1] = maxL;
		exerc[1][1] = maxR;
		for (int i = 1; i < B; ++i)
		{
		scanf("%d %d", &L, &R);
		if (L < maxL) && 


		}
	scanf("%d %d", &S, &B);
	}
	return 0;
}