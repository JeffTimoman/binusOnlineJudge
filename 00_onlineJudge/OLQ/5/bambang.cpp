#include <stdio.h>
int main()
{
	int a = 0, b = 0, n = 0;
	int y[n], z[n];
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
	for(a = 1; a <= n-1; a++)
	{
		printf("%d_", z[a-1]);
	}
	printf("%d\n", z[a-1]);
	
	return 0;
}
