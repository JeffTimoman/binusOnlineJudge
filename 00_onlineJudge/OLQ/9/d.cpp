#include <stdio.h>
#include <string.h>

char angka[10] = "OI EASGTB";
void removeAngka(char arr[], int n){
    for (int i = 0; i < n; i++){
        if (arr[i] >= '0' && arr[i] <= '8' && arr[i] !='2'){
            arr[i] = angka[arr[i]-'0'];
        }
    }
}

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);

    for (int t = 0; t < T; t++){
        int n;
        fscanf(fp, "%d\n", &n);
        char str[1001];
        fscanf(fp, "%[^\n]", str);
        // printf("%s\n", str);
        int len = strlen(str);
        removeAngka(str, len);
        printf("Case #%d: ", t+1);
        for (int i = 0; i < len; i++){
            if (str[i] == ' '){
                printf(" ");
                continue;
            }
            int x = str[i] - 'A';
            x -= n;
            while(x < 0){
                x += 26;
            }
            printf("%c", x+'A');
        }
        puts("");
    }
    fclose(fp);
    return 0;
}