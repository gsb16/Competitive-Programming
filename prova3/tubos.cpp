
#include <bits/stdc++.h>
#include <math.h>


double tubos[111];
double total;
int n;

double maislonge(double aguaml)
{
	double volmax = 0;
	double vol;

	for (int i = 0; i < n; ++i)
	{
		vol = fabs(aguaml - tubos[i]);

		if (volmax <= vol)
		{
			volmax = vol;
		}
	}

	return volmax;
}

int main()
{
	scanf("%d", &n);

	double max = 0;
	double min = 200;

	for (int i = 0; i < n; ++i)
	{
		scanf("%lf", &tubos[i]);
		min > tubos[i] ? min = tubos[i] : min = min;
		max < tubos[i] ? max = tubos[i] : max = max;
	}

	double a, a0, b, b0;

	a = min;
	b = max;

	for (int j = 0; j <= 400; ++j)
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

	for (int i = 0; i < n; ++i)
	{
		total += fabs(a0 - tubos[i]);
	}

	printf("%.2lf\n", total);

	return 0;

}