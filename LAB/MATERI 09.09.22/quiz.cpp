#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max_DATA = 1000;

char productId[max_DATA][6];
char productName[max_DATA][31];
int productQuantity[max_DATA];
int productPrice[max_DATA];
int current_index = 0;

void inputData(char * id, char * name, int quantity, int price){
    strcpy(productId[current_index], id);
    strcpy(productName[current_index], name);
    productQuantity[current_index] = quantity;
    productPrice[current_index] = price;
    current_index++;
}
void initializeData(){
    inputData("PR001", "Soy Milk", 7, 21000);
    inputData("PR002", "Cereal", 5, 15000);
    inputData("PR003", "Bread", 3, 10000);
    inputData("PR004", "Egg", 2, 5000);
    inputData("PR005", "Milk", 1, 10000);
}
void pressToContinue(){
    printf("\nPress any key to continue...");
    getchar();
}
void deleteData(int index){
    for (int i = index; i < current_index; i++){
        strcpy(productId[i], productId[i + 1]);
        strcpy(productName[i], productName[i + 1]);
        productQuantity[i] = productQuantity[i + 1];
        productPrice[i] = productPrice[i + 1];
    }
    current_index--;
    
}
void updateData(int index, char * name, int quantity, int price, char * id){
    printf("The data with id \'%s\' has been updated.", id);
    strcpy(productName[index], name);
    productQuantity[index] = quantity;
    productPrice[index] = price;
}
void viewCatalog(){
    puts("================ Item Catalog ====================");
    printf("%-20s | %-20s | %-20s | %-20s\n", "ID", "Name", "Quantity", "Price");
    printf("------------------------------------------------------------------------------\n");
    for (int i = 0; i < current_index; i++){
        printf("%-20s | %-20s | %-20d | %-20d", productId[i], productName[i], productQuantity[i], productPrice[i]);
        puts("");
    }
}

bool checkID(char *id, int &cp){
    int len = strlen(id);
    if (len != 5){
        cp= 1;
        return false;
    }
    if (id[0] != 'P' || id[1] != 'R'){
        cp = 1;
        return false;
    }
    for (int i = 0; i < current_index; i++){
        if (strcmp(id, productId[i]) == 0){
            cp = 2;
            return false;
        }
    }
    cp = 0;
    return true;
}

bool checkName(char *name, int &cp){
    int len = strlen(name);
    if (len < 5 || len > 30){
        cp = 1;
        return false;
    }
    for (int i = 0; i < len; i++){
        if (name[i] < 'A' || name[i] > 'z'){
            cp = 2;
            return false;
        }
    }
    cp = 0;
    return true;
}

bool checkNums(int quantity, int &cp, int low, int high){

    if (quantity < low || quantity > high){
        cp = 1;
        return false;
    }
    cp = 0;
    return true;
}

bool findData(char *id, int &cp, int &index){
    int len = strlen(id);
    if (len != 5){
        cp = 1;
        return false;
    }
    if (id[0] != 'P' || id[1] != 'R'){
        cp = 2;
        return false;
    }
    for (int i = 0; i < current_index; i++){
        if (strcmp(id, productId[i]) == 0){
            cp = 0;
            index = i;
            return true;
        }
    }
    cp = 3;
    return false;
}

void addNewProduct(){
    char id[6];
    int cp = 0;
    do {
        if (cp == 2){
            puts("Product ID already exists! Please try again");
        }else if (cp == 1){
            puts("Product ID format isn\'t correct! Please try again.");
            puts("Valid format: PRXXX, where X is a single digit number.");
        }
        printf("\nInput product ID: ");
        scanf("%s", id);
        getchar();
        
    }while(!checkID(id, cp));

    char name[31];
    do {
        
        if (cp == 2){
            puts("\nProduct name can\'t contain numbers! Please try again.");
        }else if (cp == 1){
            puts("Product name length isn\'t correct! Please try again.");
            puts("Valid length: 5-30 characters.");
        }
            printf("Input product name: ");
            scanf("%[^\n]", name);
            getchar();
    }while(!checkName(name, cp));

    int quantity;
    do {
        if (cp == 1){
            puts("Product quantity isn\'t correct! Please try again.");
            puts("Valid quantity: 1-100.");
        }
        printf("Input product quantity: ");
        scanf("%d", &quantity);
        getchar();
    }while (!checkNums(quantity, cp, 1, 100));


    int price;
    do{
        if (cp == 1){
            puts("\nProduct price isn\'t correct! Please try again.");
            puts("Valid price: 1000-1000000.");
        }
        printf("Input product price: ");
        scanf("%d", &price);
        getchar();
    }while (!checkNums(price, cp, 1000, 1000000));

    inputData(id, name, quantity, price);
    printf("Product \'%s\' with ID : \'%s\' has been added to the catalog!\n", name, id);
}

void updateProduct(){
    int index;
    char id[6];
    int cp = 0;
    do {
        puts("");
        if (cp == 2){
            puts("Product ID doesn\'t exist! Please try again");
        }else if (cp == 1){
            puts("Product ID format isn\'t correct! Please try again.");
            puts("Valid format: PRXXX, where X is a single digit number.");
        }
        printf("\nNew product ID: ");
        scanf("%s", id);
        getchar();
    }while(!findData(id, cp, index));

    char name[31];
    do {
        puts("");
        if (cp == 2){
            puts("\nProduct name can\'t contain numbers! Please try again.");
        }else if (cp == 1){
            puts("Product name length isn\'t correct! Please try again.");
            puts("Valid length: 5-30 characters.");
        }
            printf("New product name: ");
            scanf("%[^\n]", name);
            getchar();
    }while(!checkName(name, cp));
    
    int quantity;
    do {
        puts("");
        if (cp == 1){
            puts("Product quantity isn\'t correct! Please try again.");
            puts("Valid quantity: 1-100.");
        }
        printf("New product quantity: ");
        scanf("%d", &quantity);
        getchar();
    }while (!checkNums(quantity, cp, 1, 100));

    int price;
    do{
        puts("");
        if (cp == 1){
            puts("\nProduct price isn\'t correct! Please try again.");
            puts("Valid price: 1000-1000000.");
        }
        printf("New product price: ");
        scanf("%d", &price);
        getchar();
    }while (!checkNums(price, cp, 1000, 1000000));

    updateData(index, name, quantity, price, id);
}

void deleteProduct(){
    int index;
    char id[6];
    int cp = 0;
    do {
        puts("");
        if (cp == 2){
            puts("Product ID doesn\'t exist! Please try again");
        }else if (cp == 1){
            puts("Product ID format isn\'t correct! Please try again.");
            puts("Valid format: PRXXX, where X is a single digit number.");
        }else if (cp == 3){
            puts("Product ID doesn\'t exist! Please try again.");
        }
        printf("\nProduct ID: ");
        scanf("%s", id);
        getchar();
    }while(!findData(id, cp, index));
    
    deleteData(index);
}
void printMenu(){
    system("cls");
    puts("========= SELECT MENU =========");
    puts("1.  View Catalog");
    puts("2.  Add new product");
    puts("3.  Update product");
    puts("4.  Delete product");
    puts("5.  Exit");
    puts("==============================");
    printf(">> ");
}

int main(){
    int menu;
    initializeData();
    do{
        printMenu();
        scanf("%d", &menu);
        getchar();
        system("cls");
        switch(menu){
            case 1:
                puts("====== View Catalog ======\n");
                viewCatalog();
                break;
            case 2:
                puts("====== Add new product ======\n");
                addNewProduct();
                break;
            case 3:
                puts("====== Update product ======\n");
                updateProduct();
                break;
            case 4:
                puts("====== Delete product ======\n");
                deleteProduct();
                break;
            case 5 : 
                puts("====== Exit ======\n");
                break;
            default:
                puts("Invalid menu\n");
                break;
        }
        pressToContinue();
    } while (menu != 5);
    return 0;
}
