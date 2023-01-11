#include <stdio.h>

struct data{
    char code[10];
    char name[101];
    int credit;
}datas[1001];

int main(){
    int n;
    scanf("%d", &n);getchar();
    for (int i = 1; i <= n; i++){
        scanf("%s", datas[i].code);getchar();
        scanf("%[^\n]", datas[i].name);getchar();
        scanf("%d", &datas[i].credit);getchar();
    }

    int T;
    scanf("%d", &T);getchar();

    for (int t = 0; t < T; t++){
        int index;
        scanf("%d", &index);getchar();
        printf("Query #%d:\n", t+1);
        printf("Code: %s\n", datas[index].code);
        printf("Name: %s\n", datas[index].name);
        printf("Credits: %d\n", datas[index].credit);
    }

    return 0;
}