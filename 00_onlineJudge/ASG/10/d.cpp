#include <stdio.h>

// Make a struct with two fields : name and age
struct Person {
    char name[100];
    int age;
} person[50];

void inputPerson(int n) {
    for (int i = 0; i < n; i++) {
        scanf("%s %d", person[i].name, &person[i].age);
    }
}

int main(){
    int menu;

    scanf("%d", &menu);

    do {
        switch (menu){
            case 1:
                printf("1\n");
                inputPerson();
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("3\n");
                break;
            case 4:
                printf("4\n");
                break;
            default :
                printf("0\n");
                break;
        }
        scanf("%d", &menu);
    }while(menu != 4);
    return 0;
}