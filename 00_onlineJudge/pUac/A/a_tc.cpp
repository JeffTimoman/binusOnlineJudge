#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

FILE *fp;

int main(){
    srand(time(NULL));
    fp = fopen("testdata.in", "w");
    int n = 100;
    char id[10], name[30] = "AndiAndiAndiAndi", major[][20] = {"CS", "EE", "ME", "CE", "IE", "CH", "BT", "MA", "PH", "AR", "EN", "EC", "AG", "AE", "AU", "AT", "AS", "AP", "AM", "AH", "AF", "AD", "AC", "AB", "AA"}, position[][35] = {"Lecturer", "AssistantLecturer", "SeniorLecturer", "Associate Professor", "Professor"};
    fprintf(fp, "%d\n", n);
    for (int i = 0; i < n; i++){
        fprintf(fp, "%s\n", sprintf(id, "B1000%d", i + 1));
        fprintf(fp, "%s\n", name);
        fprintf(fp, "%s\n", major[rand() % 25]);
        fprintf(fp, "%lf", (double)(rand() % 1000000) / 100);
        fprintf(fp, "%s\n", position[rand() % 5]);
    }

    fclose(fp);
    return 0;
}