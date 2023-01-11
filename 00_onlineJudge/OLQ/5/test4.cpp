#include <stdio.h>

int main(){
  int T;
  scanf("%d",&T);
  for(int t = 0; t<T; t++){
    int arr[200001] = {};
    int n;
    int maxFreq = 0;
    int maxInput = 0;
    scanf("%d",&n);
    int input[n+2]= {};
    for (int i = 0; i < n; i++){
      scanf("%d",&input[i]);
      if (input[i]>maxInput){
        maxInput = input[i];
      }
      arr[input[i]]++;
      if (arr[input[i]]>maxFreq){
        maxFreq = arr[input[i]];
      }
    }
    printf("Case #%d: %d\n", t+1, maxFreq);
    for(int i = 0; i <= maxInput; i++){
      if (arr[i]==maxFreq)printf("%d ",i);
    }
    puts("");
  }
  
}