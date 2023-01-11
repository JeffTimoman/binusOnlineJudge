#include <stdio.h>
#include <string.h>

FILE *fp, *fp2;
struct Data{
    char id[15];
    char name[30];
    char major[20];
    double gpa;
    char position[35];
}datas[5001];

int main(){
    fp = fopen("testdata.in", "r");
    fp2 = fopen("testdata.out", "w");
    int n;
    fscanf(fp, "%d\n", &n);
    for (int i = 0; i < n; i++){
        fscanf(fp, "%s\n", datas[i].id);
        fscanf(fp, "%[^\n]\n", datas[i].name);
        fscanf(fp, "%s\n", datas[i].major);
        fscanf(fp, "%lf\n", &datas[i].gpa);
        fscanf(fp, "%s\n", datas[i].position);
    }

    int t;
    fscanf(fp, "%d\n", &t);
    for (int i = 0; i < t; i++){
        char position[35], major[20];
        double gpa;
        fscanf(fp, "%s %s %lf\n", position, major, &gpa);
        int counter = 0;
        for (int j = 0; j < n; j++){
            if (strcmp(datas[j].position, position) == 0 && strcmp(datas[j].major, major) == 0 && datas[j].gpa >= gpa){
                counter++;
            }
        }
        // printf("Case #%d: %d\n", i+1, counter);
        fprintf(fp2, "Case #%d: %d\n", i+1, counter);
    }
    fclose(fp);
    return 0;
}