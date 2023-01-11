#include <stdio.h>
#include <string.h>
struct food{
    char name[255];
    int price;
    double rating;
    void (*display)(food f);
};

union food_union{
    char name[255];
    int price;
    double rating;
};

//Inheritance
struct food2 : food{
    char topping[255];
};

void displayFood(food f){
    printf("Name : %s\nPrice : %d\nRating : %.2lf\n", f.name, f.price, f.rating);
}
int main(){
    //struct
    //tipe data yang kita define sendiri

    //union 

    food f = {"Nasi", 15000, 4.5};
    // printf("Name : %s\nPrice : %d\nRating : %.2lf\n", f.name, f.price, f.rating);
    f.display = &displayFood;
    f.display(f);

    food_union fu;
    fu.price = 15000;
    //union cuman bisa isi 1 doang, kalo isi 2, yang pertama di timpa, misal isi name, bisa. Lalu misal isi lain2, maka tyang name tadi ilang.

    printf("%d %d", sizeof(food), sizeof(food_union));
    printf("Name : %s\nPrice : %d\nRating : %.2lf\n", fu.name, fu.price, fu.rating);

    food2 f2;
    f2.price = 15000;
    strcpy(f2.name, "Nasi");
    f2.rating = 4.5;
    strcpy(f2.topping, "Ayam");
    printf("Name : %s\nPrice : %d\nRating : %.2lf\nTopping : %s\n", f2.name, f2.price, f2.rating, f2.topping);
    return 0;
}