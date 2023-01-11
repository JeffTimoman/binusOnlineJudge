#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//View, Add, Update, Delete
//Environment Variable
int index = 0;
struct product{
	char id[6];
	char name[31];
	int quantity;
	int price;
}Products[1000000];

//Validations
bool validateID(char id[]){
	if (strlen(id) != 5) {
		puts("Product format invalid!");
		return false;	
	}
	
	if (id[0] != 'P' && id[1] != 'R') {
		puts("Product format invalid!");
		return false;	
	}
	
	for (int i = 2; i < 5; i++){
		if (isdigit(id[i]) == 0) {
			puts("Product format invalid!");
			return false;
		}
	}
	
	for (int i = 0; i < index; i++){
		if (strcmp(id, Products[i].id) == 0) {
			printf("Product id %s already exist!\n", id);
			return false;
		}
	}
	return true;
}
bool validateName(char name[]){
	if (strlen(name) < 5 || strlen(name) > 30){
		puts("Product name length must be between 5 and 30 characters");
		return false;
	}
	for (int i = 0; i < strlen(name); i++){
		if (isdigit(name[i]) == 1){
			puts("Product name must be alphabetical !");
			return false;
		}
	}
	return true;
}
bool validateQuantity(int quantity){
	if (quantity < 1 || quantity > 100) {
		puts("Product quantity must be between 1 and 100 pcs");
		return false;
	}
	return true;
}
bool validatePrice(int price){
	if (price < 1000 || price > 100000){
		puts("Product price must be between Rp 1000 and Rp 100000");
		return false;
	}
	return true;
}
bool validateFindID(char id[], int &picked_index){
	if (strlen(id) != 5) {
		puts("Product format invalid!");
		return false;	
	}
	
	if (id[0] != 'P' && id[1] != 'R') {
		puts("Product format invalid!");
		return false;	
	}
	
	for (int i = 2; i < 5; i++){
		if (isdigit(id[i]) == 0) {
			puts("Product format invalid!");
			return false;
		}
	}
	for (int i = 0; i < index; i++){
		if (strcmp(Products[i].id, id) == 0){
			picked_index = i;
			return true;
		}
	}
	printf("ID '%s' does not exist !\n", id);
	return false;
}

//Functions
void addData(char id[], char name[], int quantity, int price){
	
	strcpy(Products[index].id, id);
	strcpy(Products[index].name, name);
	Products[index].quantity = quantity;
	Products[index].price = price;
	index++;
}
void updateData(int picked_index, char name[], int quantity, int price){
	strcpy(Products[picked_index].name, name);
	Products[picked_index].quantity = quantity;
	Products[picked_index].price = price;
}
void deleteData(int picked_index){
	for (int i = picked_index; i < index; i++){
		Products[i] = Products[i+1];
	}
	index--;
}
void printMenu(){
	system("cls");
	puts("PPTI 15 Factory");
	puts("1. View Catalogue");
	puts("2. Add New Product");
	puts("3. Update Product");
	puts("4. Delete Product");
	puts("5. Exit");
	printf(">> ");
}
void pressToContinue(){
	printf("Press to continue . . . ");
	getchar();
}
void innitData(){	
	addData("PR001", "Soy Sauce", 7, 21000);
	addData("PR002", "Tofu", 25, 3000);
	addData("PR003", "Tempe", 30, 2500);
	addData("PR004", "Soy Milk", 16, 6500);
	addData("PR005", "Soy Yoghurt", 10, 18000);
}

//Function in switch case.
void viewCatalogue(){
	puts("================================================");
	puts("| Product ID | Product Name | Quantity | Price |");
	puts("================================================");
	for (int i = 0; i < index; i++){
		printf("| %-10s | %-12s | %-8d | %-5d |\n", Products[i].id, Products[i].name, Products[i].quantity, Products[i].price);
	}
	puts("================================================");
}
void addProduct(){
	
	char id[10];
	do{
		printf("Input product id [PRXXX]\t: ");
		scanf("%s", id);
		getchar();
		
	}while(!(validateID(id)));
	
	char name[100];
	do {
		printf("Input product name[5..30]\t: ");
		scanf("%[^\n]", name);
		getchar();
	}while(!(validateName(name)));
	
	int quantity;
	do {
		printf("Input product quantity [1..100]\t: ");
		scanf("%d", &quantity);
		getchar();
	}while(!(validateQuantity(quantity)));
	
	int price;
	do {
		printf("Input product price [1000..100000]: ");
		scanf("%d", &price);
		getchar();
	}while(!(validatePrice(price)));
	addData(id, name, quantity, price);
	printf("Product %s has been added!\n", name);
}
void updateProduct(){
	char id[10];
	int picked_index;
	
	do {
		printf("Input product id [PRXXX]\t: ");
		scanf("%s", id);
		getchar();
	}while(!(validateFindID(id, picked_index)));
	
	char name[100];
	do {
		printf("Input product name[5..30]\t: ");
		scanf("%[^\n]", name);
		getchar();
	}while(!(validateName(name)));
	
	int quantity;
	do {
		printf("Input product quantity [1..100]\t: ");
		scanf("%d", &quantity);
		getchar();
	}while(!(validateQuantity(quantity)));
	
	int price;
	do {
		printf("Input product price [1000..100000]: ");
		scanf("%d", &price);
		getchar();
	}while(!(validatePrice(price)));
	updateData(picked_index, name, quantity, price);
	
}
void deleteProduct(){
	char id[10];
	int picked_index;
	
	do {
		printf("Input product id [PRXXX]\t: ");
		scanf("%s", id);
		getchar();
	}while(!(validateFindID(id, picked_index)));
	deleteData(picked_index);
	printf("Product '%s' has been deleted !\n", id);
}

//Main Function
int main(){
	int menu;
	innitData();
	do {
		printMenu();
		scanf("%d", &menu);
		getchar();
		switch (menu){
			case 1:
				puts("View Catalogue");
				viewCatalogue();
				pressToContinue();
				break;
			case 2: 
				puts("Add New Product");
				viewCatalogue();
				addProduct();
				pressToContinue();
				break;
			case 3: 
				puts("Update Product");
				viewCatalogue();
				updateProduct();
				pressToContinue();
				break;
			case 4: 
				puts("Delete Product");
				viewCatalogue();
				deleteProduct();
				pressToContinue();
				break;
			case 5:
				puts("Thank you for using this app!");
				getchar();
				break;
			default:
				puts("The input is not valid, try again!");
				break;
		}
	}while(menu != 5);
	return 0;
}
