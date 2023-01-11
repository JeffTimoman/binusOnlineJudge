#include <stdio.h>
#include <string.h>


int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);

    while (T--){
        char str[1001];
        fscanf(fp, "%s\n", str);
        int len = strlen(str);
        int tanda1[27] = {};
        // int tanda2[27] = {};
        int counter[27] = {};
        int n;
        fscanf(fp, "%d\n", &n);
        while (n--){
            char a, b;
            fscanf(fp, "%c %c\n", &a, &b);
            for (int i = 0; i < len; i++){
                if (str[i] == a && tanda1[a-'A'] == 0){
                    str[i] = b;
                }
            }
            tanda1[a-'A'] = 1;
            // tanda2[b-'A'] = 1;
        }
        for (int i = 0; i < 26; i++){
            int counter = 0;
            // if (tanda2[i] == 1){
            //     for (int j = 0; j < len; j++){
            //         if (str[j] == i+'A'){
            //             counter++;
            //         }
            //     }
            // }
            for (int j = 0; j < len; j++){
                if (str[j] == i+'A'){
                    counter++;
                }
            }
            if (counter > 0){
                printf("%c %d\n", i+'A', counter);
            }
        }
        // printf("%s", str);
    }
    return 0;
}

/*
C 1
D 1
F 1
I 1
Q 1
W 2
*/