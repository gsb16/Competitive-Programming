
#include <bits/stdc++.h>

int matriz[10001][10001];
int n, x, y;

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &x, &y);
		matriz[x][y] = 1;
	}


}