#include <stdio.h>

int binarySearch(int arr[],int n,int k){
    int index=-2; 
    int l=0,r=n-1,m;
    while(l<=r)
    {
        m=(l+r)/2;
        if(arr[m]<k)
            l=m+1;
        else
        {
            if(arr[m]==k)index=m; 
            r=m-1;
        }
    }
    return index+1;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a+1];
    for (int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < b; i++){
        int x;
        scanf("%d", &x);
        int r = binarySearch(arr, a, x);
        printf("%d\n", r);
    }
    return 0;
}