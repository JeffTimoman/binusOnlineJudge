//Sofea Homestay

#include <stdio.h>

int main(){
    int n = 12;
    double sum;
    for (int i = 0; i < n; i++){
        double x;
        scanf("%lf,", &x);
        sum += x;
    }
    double tax, cleaning;
    tax = sum * 0.07;
    cleaning = sum * 0.05; 
    printf("Annual tourism tax : %.2lf\nAnnual cleaning Service paid :%.2lf\n\nNet Profit : %.2lf", tax, cleaning, sum - tax - cleaning);
    
    return 0;
}