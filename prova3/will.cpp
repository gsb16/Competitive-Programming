
#include <bits/stdc++.h>

int main()
{
	char frase[26];
	int n, temp;

	scanf("%s", frase);

	scanf("%d", &n);
	for (int j = 0; j < n; ++j)
	{
		scanf("%d", &temp);
		printf("%c", frase[temp-1] );
	}
	printf("\n");
	return 0;
}