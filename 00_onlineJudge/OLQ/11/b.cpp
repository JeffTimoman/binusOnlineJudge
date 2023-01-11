#include <stdio.h>
#include <string.h>

FILE *fp;
struct data{
    char name[101];
    char tree[101];
}datas[1001];

int binarySearch(int left, int right, char search[]){
    if (left <= right){
        int mid = left + (right-left)/2;
        if (strcmp(search, datas[mid].name) == 0) return mid;
        if (strcmp(search, datas[mid].name) < 0) return binarySearch(left, mid-1, search);
        if (strcmp(search, datas[mid].name) > 0) return binarySearch(mid+1, right, search);
    }
    return -1;
}
int main(){
    fp = fopen("testdata.in", "r");
    int T;
    fscanf(fp, "%d\n", &T);
    for (int i = 0; i < T; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", datas[i].name, datas[i].tree);
        // printf("%s %s\n", datas[i].name, datas[i].tree);
    }
    int Q;
    fscanf(fp, "%d\n", &Q);
    // printf("%d", Q);
    for (int i = 0; i < Q; i++){
        char search[101], temp[101];
        fscanf(fp, "%[^\n]\n", search);
        printf("Case #%d: ", i+1);
        int r = binarySearch(0, T-1, search);
        if (r == -1){
            printf("N/A\n");
        } else {
            printf("%s\n", datas[r].tree);
        }
    }
    fclose(fp);
    return 0;
}