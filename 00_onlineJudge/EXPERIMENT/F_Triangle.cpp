#include <stdio.h>
int main()
{
int a = 0, b = 0, x = 0, baris = 0, kolom = 0;
    scanf("%d", &b);
    for(a = 1; a <= b; a++)
    {
    	scanf("%d", &x);
    	printf("Case #%d:", a);
    	
    	if(x % 2 ==0)
    	{
		    for(baris = 0; baris <= x; baris++)
		    {
		    	for(kolom = baris; kolom < x; kolom++)
		    	{
					printf("_");
				}
				for(kolom = 1; kolom <= baris; kolom++)
				{
					if(baris %2 == 0)
					{
						if(kolom %2 == 0)
						{
							printf("*");	
						}
						else
						{
							printf("#");
						}
					}
					else
					{
						if(kolom %2 == 0)
						{
							printf("*");	
						}
						else
						{
							printf("#");
						}
					}
				}
				printf("\n");
			}
		}
		else
		{
			  for(baris = 0; baris <= x; baris++)
		    {
		    	for(kolom = baris; kolom < x; kolom++)
		    	{
					printf("_");
				}
				for(kolom = 1; kolom <= baris; kolom++)
				{
					if(baris %2 == 0)
					{
						if(kolom %2 == 0)
						{
							printf("#");	
						}
						else
						{
							printf("*");
						}
					}
					else
					{
						if(kolom %2 == 0)
						{
							printf("#");	
						}
						else
						{
							printf("*");
						}
					}
					
				}
				printf("\n");
			}
		}
	}
	return 0;
}
