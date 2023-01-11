#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);

    while(T--){
        char str[10001];
        fscanf(fp, "%s\n", str);
        int len = strlen(str);
        int n;
        fscanf(fp, "%d\n", &n);
        int tanda1[1001] = {};
        int tanda2[27] = {};
        for(int i=0; i<n; i++){
            char a, b; 
            fscanf(fp, "%c %c\n", &a, &b);
            if (tanda1[a-'A'] == 0){
                for (int j = 0; j < len; j++){
                    if (str[j] == a && tanda1[j] == 0){ 
                        str[j] = b;
                        tanda1[j] = 1;
                    }
                }
            }
            tanda2[b-'A'] = 1;
        }
    // printf("%s\n", str);
        for (int i = 0; i < 26; i++){
            int counter = 0;
            if (tanda2[i] == 1){
                for (int j = 0; j < len; j++){
                    if (str[j] == i+'A'){
                        counter++;
                    }
                }
            }
            if (counter > 0){
                printf("%c %d\n", i+'A', counter);
            }
        }
    }
    
    fclose(fp);
    return 0;
}