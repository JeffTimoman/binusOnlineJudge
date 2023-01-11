#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int length = 1000;
int current_index = 0;
int added_index = 0;
struct User{
    char userID[255];
    char userName[255];
    char email[255];
}Users[length];

struct AddedUser{
    char userID[255];
    char userName[255];
    char email[255];
}Users[length];


void addUser(char id[], char name[], char mail[]){
    strcpy(Users[current_index].userID, id);
    strcpy(Users[current_index].userName, name);
    strcpy(Users[current_index].email, mail);
    current_index++;
}

void innitializeData(){
    addUser("christ0208", "Christopher", "chris@gmail.com");
    addUser("jordywa", "Jordy", "jordy@gmail.com");
    addUser("haku", "Haku", "haku@gmail.com");
    addUser("elior", "Eleanor", "el@gmail.com");
    addUser("cleo", "Cleo Deus", "cleo@gmail.com");
}

void printMenu(){
    puts("Friendster CLI");
    puts("1. Add Friend");
    puts("2. Remove Friend");
    puts("3. Exit");
    printf(">> ");
}

void viewFriend(){
    puts("Friend List");
    printf("%-5s %-10s %-10s %-10s", "No", "ID", "Name", "Email");
    for(int i = 0; i < current_index; i++){
        printf("%-5d |  %-10s | %-10s | %-10s", i+1, Users[i].userID, Users[i].userName, Users[i].email);
    }
}
void addFriend(){
    if (current_index == 0){
        printf("No friend to add");
        return;
    }
    viewFriend();
    char id[255];
}

int main(){
    int menu;
    innitializeData();
    do {
        printMenu();
        scanf("%d", &menu);
        getchar();
        system("cls");
        switch (menu){
            case 1 :
                puts("Add Friend");
                break;
            case 2 : 
                puts("Unfriend");
                break;
            case 3 : 
                puts("Exit");
                break;
            default : 
                puts("Invalid menu");
                break;}
    } while (menu != 3);
    
    return 0;
}