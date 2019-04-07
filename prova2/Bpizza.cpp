#include <bits/stdc++.h>

int main()
{
	int dias, pessoas, pode;
	char data[16];

	scanf("%d %d", &pessoas, &dias);
	for (int i = 0; i < dias; ++i)
	{
		scanf("%s", data);
		int todospodem = 1;
		for (int j = 0; j < pessoas; ++j)
		{
			scanf("%d", &pode);
			if(!pode)
			{
				todospodem = 0;
			} 
		}
		if(todospodem)
		{
			printf("%s\n", data);
			return 0; 
		}
	}
	printf("Pizza antes de FdI\n");
	return 0;
}