#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int index = 0;
const int size = 1000;

char bookName[size][100];
char bookGenre[size][100];
int bookPrice[size];
char bookId[size][100];

struct Book{
    char name[100];
    char genre[100];
    int price;
    char id[100];
}bookList[size];


void updateData(int index, char name[], char genre[], int price){
    strcpy(bookList[index].name, name);
    strcpy(bookList[index].genre, genre);
    bookList[index].price = price;
}

void printMenu(){
    system("cls");
    puts("Book Store");
    puts("================");
    puts("1. Insert Book");
    puts("2. Update Book");
    puts("3. Delete Book");
    puts("4. Exit");
    printf(">> ");
}
void pressToContinue(){
    printf("Press any key to continue...");
    getchar();
}

void viewBook(){
    puts("Book List");
    printf("%-5s | %-20s | %-10s | %-6s | %-10s\n", "No.", "Book Name", "Genre", "Price", "ID");
    puts("==========================================================");
    // printf("No.    ||              Book Name ||     Genre ||      Price\n");
    for (int i = 0; i < index; i++){
        printf("%-5d | %-20s | %-10s | %-6d | %-10s\n", i+1, bookName[i], bookGenre[i], bookPrice[i], bookId[i]);
    }
    puts("==========================================================");
}

bool checkName(char name[]){
    char *result = strstr(name, " book");
    if (result == NULL){
        puts("The format is invalid [1..20 book]");
        return false;
    }

    if (strlen(result) == strlen(" book")) return true;
    else {
        puts("The format is invalid [1..20 book]");
        return false;
    }
    
    //Cara Logic
    // char cp[5] = " book";
    // for (int i = 0; i < 5; i++){
    //     if (name[strlen(name) - 5 + i] != cp[i]){
    //         puts("The name format is invalid [1..20 book]");
    //         return false;
    //     }
    // }
    for (int i = 0; i < index; i++){
        if (strcmp(name, bookName[i]) == 0){
            puts("The name \'%s\' is not unique, try again!");
            return false;
        }
    }
    return true;
}

bool checkGenre(char genre[]){
    char cp[3][20]= {"Horror", "Action", "Comedy"};
    for (int i = 0; i < 3; i++){
        if (strcmp(genre, cp[i]) == 0){
            return true;
        }
    }
    return false;

}
bool checkPrice(int price){
    if (price < 0 || price > 100){
        puts("Book Price is not Valid!");
        return false;
    }
    return true;
}
bool validateIndex(int picked_index){
    if (picked_index < 0 || picked_index >= index){
        puts("The index is not valid!");
        return false;
    }
    return true;
}
void addBook(char name[], char genre[], int price, char id[]){
    strcpy(bookName[index], name);
    strcpy(bookGenre[index], genre);
    bookPrice[index] = price;
    strcpy(bookId[index], id);
    index++;
}
void deleteData(int picked_index){
    for (int i = picked_index; i < index; i++){
        strcpy(bookName[i], bookName[i+1]);
        strcpy(bookGenre[i], bookGenre[i+1]);
        bookPrice[i] = bookPrice[i+1];
        strcpy(bookId[i], bookId[i+1]);
    }
    index--;
}
void generateId(char *id){
    for (int i = 0; i < 2; i++){
        int length = 'Z'-'A';
        id[i] = (rand() % length) + 'A';
    }
    for (int i = 2; i < 5; i++){
        int length = '9'-'0';
        id[i] = (rand() % length) + '0';
    }
    id[5] = '\0';
}
void insertBook(){
    char name[100];
    do {
        printf("Book Name [must be unique] : ");
        scanf("%[^\n]", name);
        getchar();
    }while(!checkName(name));

    char genre[100];
    do {
        printf("Book Genre [Horror/Action/Comedy]: ");
        scanf("%s", genre);
        getchar();
    }while (!checkGenre(genre));

    int price = 0;
    do {
        printf("Book Price [0..100]: ");
        scanf("%d", &price);
        getchar();
    }while(!checkPrice(price));

    char id[10];

    for (int i = 0; i < 2; i++){
        int length = 'Z'-'A';
        id[i] = (rand() % length) + 'A';
    }
    for (int i = 2; i < 5; i++){
        int length = '9'-'0';
        id[i] = (rand() % length) + '0';
    }
    id[5] = '\0';
    // printf("%s\n", id);
    addBook(name, genre, price, id);
    
    printf("Book \'%s\' has been added to the database.\n", name);
}

void updateBook(){
    int picked_index;
    if (index == 0){
        puts("There is no book in the database!");
        return;
    }
    do{
        viewBook();
        printf("Pick the book number to update [1..%d]: ", index);
        scanf("%d", &picked_index); 
        picked_index--;
        getchar();

    }while(!(validateIndex(picked_index)));

    char name[100];
    do {
        printf("Book Name [must be unique] : ");
        scanf("%[^\n]", name);
        getchar();
    }while(!checkName(name));
    char genre[100];
    do {
        printf("Book Genre [Horror/Action/Comedy]: ");
        scanf("%s", genre);
        getchar();
    }while(!checkGenre(genre));

    int price;
    do {
        printf("Book Price [0..100]: ");
        scanf("%d", &price);
        getchar();
    }while(!checkPrice(price));
}
void deleteBook(){
    int picked_index;
    if (index == 0){
        puts("There is no book in the database!");
        return;
    }
    do{
        viewBook();
        printf("Pick the book number to delete [1..%d]: ", index);
        scanf("%d", &picked_index); 
        picked_index--;
        getchar();

    }while(!(validateIndex(picked_index)));

    printf("Book \'%s\' has been deleted from the database.\n", bookName[picked_index]);
    deleteData(picked_index);
}
int main(){
    int menu;
    do {
        printMenu();
        scanf("%d", &menu);
        getchar();
        switch (menu){
            case 1 : 
                insertBook();
                pressToContinue();
                break;
            case 2 :
                system("cls");
                updateBook();
                pressToContinue();
                break;
            case 3 : 
                deleteBook();
                pressToContinue();
                break;
            case 4 : 
                puts("Thank you for using this application!");
                pressToContinue();
                break;
            default  : 
                puts("Input Invalid, Try Again");
        }
    }while(menu != 4);
    return 0;
}