#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");
    int n, page = 0, counter = 0, cp = 1;
    fscanf(fp, "%d\n", &n);
    // printf("%d", n);
    while (!feof(fp)){
        char string[1000];
        fscanf(fp, "%s", string);fgetc(fp);

        if (string[0] == '#'){
            page++;
            if (counter < n && counter != 0){
                printf("page %d: %d word(s)\n", page, counter);
                cp = 0;
            }
            counter = 0;
        }
        counter++;
    }
    if (cp == 1) printf("The essay is correct\n");
    fclose(fp);
    return 0;
}