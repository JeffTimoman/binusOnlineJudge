#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void viewMenu(){
    puts("Book Store");
    puts("================");
    puts("1. View Book");
    puts("2. Insert Book");
    puts("3. Update Book");
    puts("4. Delete Book");
    puts("5. Exit");
    printf(">> ");
}
void pressToContinue(){
    printf("Press any key to continue...");
    getchar();
}

int main(){
    int menu;
    do {
        viewMenu();
        scanf("%d", &menu);
        getchar();
        switch (menu){
            case 1:
                puts("View Book");
                break;
            case 2:
                puts("Insert Book");
                break;
            case 3:
                puts("Update Book");
                break;
            case 4:
                puts("Delete Book");
                break;
            case 5:
                puts("Exit");
                break;
            default:
                puts("Invalid Menu");
                break;
        }
        pressToContinue();
    } while (menu != 5);
    return 0;
}