#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp = fopen("testdata.in", "r");
    int min, page = 0, count = 0, cp = 1;
    fscanf(fp, "%d\n", &min);
    char str[1001];
    while (fscanf(fp, "%s", str) != EOF){
        if (str[0] == '#'){
            page++;
            if (count < min){
                cp = 0;
                printf("page %d: %d word(s)\n", page, count);
            }
            count = 0;
        }else{
            count++;
        }
    }
    if (cp) printf("The essay is correct\n");
    return 0;
}