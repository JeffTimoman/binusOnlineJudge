#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int max_DATA = 1000;

struct node{
    int x;
    node *next;
} *head, *tail;

int main(){
    node *root;
    root = new node;
    root->next = 0;
    root->x = 10;
    printf("%d\n", root->x);


    int x[100000000];

    
    return 0;
}
