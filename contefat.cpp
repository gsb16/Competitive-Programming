
#include <bits/stdc++.h>

int main()
{

	int count, temp, N, inc;

	scanf("%d", &N);
	while (N != 0)
	{
		count = 0;
		temp = N;
		for (int k = 2; (k <= N ) && (temp > 1); k++)
		{
			inc = 0;
			while ((temp % k) == 0)
			{
				temp = temp / k;
				inc++;
				//printf("Temp: %d K: %d\n", temp, k);
			}
			if (inc > 0)
			{
				count++;
			}
			//printf("Count: %d\n", count);
		}
		printf("%d : %d\n", N, count);
		scanf("%d", &N);

	}

	return 0;
}