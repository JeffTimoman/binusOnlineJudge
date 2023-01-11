#include <stdio.h>
#include <string.h>

//A function to sort arr of char in ascending order
void sort(char arr[][100], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp(arr[i], arr[j]) > 0){
                char temp[100];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main(){
    char names[][100] = {"Angkianto", "Alvina", "Andi"};
    int n = 3;
    sort(names, n);
    for (int i = 0; i < n; i++){
        printf("%s ", names[i]);
    }
    return 0;
}