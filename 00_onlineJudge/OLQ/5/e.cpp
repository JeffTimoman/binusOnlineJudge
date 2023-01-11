#include <stdio.h>

int main(){
    int s;
    scanf("%d",&s);
    for (int x = 0; x < s; x++){
        int arr[200001] = {};
        int n;
        int maxFreq = 0;
        int maxInput = 0;
        scanf("%d",&n);
        for (int i = 0; i < n; i++){
            int x;
            scanf("%d", &x);
            if (x>maxInput){
                maxInput = x;
            }
            arr[x]++;
            if (arr[x]>maxFreq){
                maxFreq = arr[x];
            }
        }
        printf("Case #%d: %d\n", x+1, maxFreq);
        int result[maxInput] = {}, counter = 0;
        for(int i = 0; i <= maxInput; i++){ 
            if (arr[i]==maxFreq){
                result[counter]=i;
                counter++;
            }
        }

        for (int i = 0; i < counter; i++){
            if (i == counter -1) printf("%d\n",result[i]);
            else printf("%d ",result[i]);
        }
    }
    return 0;
}