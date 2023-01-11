#include <stdio.h>
#include <stdlib.h>
void writeFile(){
    FILE *file = fopen("data.txt", "w");
    fputc('A', file); //write a char
    fputs("\nHello World", file); //write a string
    fprintf(file, "\nNumber : %d", 123); //write a number
}


void readFile(){
        FILE *file = fopen("data.txt", "r");
    while(!feof(file)){
            // char a = fgetc(file); //read a char
        // printf("%c", a);
        // char a[255] = "";
        // fgets(a, 255, file); //read a string
        // printf("%s", a);
        char name[255] = "";
        int price;
        double rating;
        fscanf(file, "%[^#]#%d#%f\n", name, &price, &rating); //read a number
        printf("Name : %s\nPrice : %d\nRating : %lf\n", name, price, rating);   
    }
    fclose(file);
}

void addData(){
    FILE *file = fopen("data.txt", "a");
    char name[255] = "";
    int price;
    double rating;
    printf("Add Name : ");
    scanf("%[^\n]", name);getchar();
    printf("Add Price : ");
    scanf("%d", &price);getchar();
    printf("Add Rating : ");
    scanf("%lf", &rating);getchar();

    fprintf(file, "%s#%d#%lf", name, price, rating);
    fclose(file);
}
int main(){
    //name file, mode
    // r -> read
    // w -> write
    // a -> append
    // r+ -> read and write
    // w+ -> write and read
    // a+ -> append and read

    int menu;
    do {
        system("cls");
        printf("Food Menu\n");
        printf("1. Write file\n");
        printf("2. Read file\n");
        printf("3. Exit\n");
        printf("Your choice: ");
        scanf("%d", &menu);
        getchar();
        switch (menu){
            case 1:
                addData();
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                break;
        }
        printf("Tap to continue . . . ");
        getchar();
    } while(menu != 3);

    return 0;
}