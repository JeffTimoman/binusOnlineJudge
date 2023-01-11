#include <stdio.h>
#include <string.h>

struct Data{
    char id[15];
    char name[30];
    char major[20];
    double gpa;
    char position[35];
}datas[5001];

int main(){
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        scanf("%s\n", datas[i].id);
        scanf("%[^\n]\n", datas[i].name);
        scanf("%s\n", datas[i].major);
        scanf("%lf\n", &datas[i].gpa);
        scanf("%s\n", datas[i].position);
    }

    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++){
        char position[35], major[20];
        double gpa;
        scanf("%s %s %lf\n", position, major, &gpa);
        int counter = 0;
        for (int j = 0; j < n; j++){
            if (strcmp(datas[j].position, position) == 0 && strcmp(datas[j].major, major) == 0 && datas[j].gpa >= gpa){
                counter++;
            }
        }
        printf("Case #%d: %d\n", i+1, counter);
    }
    return 0;
}