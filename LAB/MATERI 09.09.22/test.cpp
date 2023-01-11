#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Human{
    char name[50] = {};
    int age;
    Human* next;
} *human;

int main(){
    human = (struct Human*)malloc(sizeof(struct Human) * 100);
    human[0].age = 20;
    strcpy(human[0].name, "Bambang");
    human[1].age = 21;
    strcpy(human[1].name, "Sukarno");
    human[2].age = 22;
    
    return 0;
}