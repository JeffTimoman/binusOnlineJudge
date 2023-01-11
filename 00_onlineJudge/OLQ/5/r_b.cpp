#include <stdio.h>
int main()
{
	int a = 0, b = 0, n = 0;
	int y[200], z[200];
	scanf("%d", &n);
	for(a = 1; a <= n; a++)
	{
		scanf("%d", &y[a]);
	}
	for(a = 1; a <= n; a++)
	{
		scanf("%d", &b);
		z[y[a]] = b;
	}
	for(a = 1; a <= n; a++)
	{
		if(a == n)
		{
			printf("%d", z[a-1]);
		}
		else
		{
			printf("%d ", z[a-1]);
		}
	}
	printf("\n");
	return 0;
}

