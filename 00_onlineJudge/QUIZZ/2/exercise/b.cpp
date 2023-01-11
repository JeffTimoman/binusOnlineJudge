#include <stdio.h>


struct data{
    char id[21];
    char name[101];
    int age;
}datas[1002];
 
int main(){
    int n;
    scanf("%d", &n); getchar();
    for (int i = 1; i <= n; i++){
        scanf("%s", datas[i].id); getchar();
        scanf("%[^\n]", datas[i].name); getchar();
        scanf("%d", &datas[i].age); getchar();
    }

    int q;
    scanf("%d", &q); getchar();
    for (int i = 1; i <= q; i++){
        int find;
        scanf("%d", &find); getchar();
        printf("Query #%d:\n", i);
        printf("ID: %s\n", datas[find].id);
        printf("Name: %s\n", datas[find].name);
        printf("Age: %d\n", datas[find].age);
    }
    return 0;
}

/*
01337
Lili Lili
18
69420
Bibi
20
2
2
*/