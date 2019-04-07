
#include <bits/stdc++.h>

int main()
{
	
	int N, B, Test;

	scanf("%d %d", &N, &B);
	while ((N != 0) && (B != 0))
	{
		
		int VetB[100] = {0}, VetN[100] = {0};

		for (int k = 0; k < B; k++)
		{
			scanf("%d", &VetB[k]);
		}
		for (int i = 0; i < B; i++)
		{
			for (int j = 0; j < B; j++)
			{
				VetN[abs(VetB[i] - VetB[j])] = 1;
			}
		}
		
		Test = 8;

		for (int k = 0; k <= N; k++)
		{
			if (VetN[k] != 1) 
			{
				Test = 0;
			}
		}
		if (Test != 8)
		{
			printf("N\n");
		}
		else
		{
			printf("Y\n");
		}

		scanf("%d %d", &N, &B);
	}

	return 0;

}
