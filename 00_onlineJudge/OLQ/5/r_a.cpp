#include <stdio.h>
int main()
{
    int x = 0 ,y = 0, a = 0, b = 0, c = 0;
    scanf("%d %d",&x, &y);
	    int arr[x+2][y+2];
	    for(a = 0; a < x; a++){
	        for(int b = 0; b < y; b++)
			{
            scanf("%d", &arr[a][b]);
        }
    }
 	scanf("%d", &c);
    int change[c][3];
    for(a = 0; a < c; a++){
        for(b = 0; b < 3; b++)
		{
            scanf("%d", &change[a][b]);
        }
    }
    for(a = 0; a < c; a++){
        arr[change[a][0]-1][change[a][1]-1]=change[a][2];
    }
    for(a = 0; a < x; a++){
        for(b = 0; b < y; b++){
            printf("%d ",arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}
