#include <stdio.h>
#include <stdlib.h>

//A function to read numbers in numbers.txt and store them in an array
void readNumbers(int numbers[], int *n){
    FILE *f = fopen("numbers.txt", "r");
    if (f == NULL){
        printf("Cannot open file");
        exit(1);
    }
    int i = 0;
    while (fscanf(f, "%d", &numbers[i]) != EOF){
        i++;
    }
    *n = i;
    fclose(f);
}


// int main(){
//     FILE *numberFile;
//     int sum = 0;
//     char singleLine[160];
//     numberFile = fopen("numbers.txt", "r");
//     while (!feof(numberFile)){
//         // fgets(singleLine, 150, numberFile);
//         int number = atoi(singleLine);
//         sum += number;
//     }
//     printf("%d", sum);
//     fclose(numberFile);
//     return 0;
// }