#include <stdio.h>

int main(){
    int n; 
    double average;
    scanf("%d", &n);
    int score[101];
    // int score2[101];
    scanf("%d %d %d", &score[0], &score[1], &score[2]);
    for (int i = 0; i < n; i++){
        int normal;
        scanf("%d", &normal);
        average += normal;
    }
    average += score[0] + score[1] + score[2];
    average /= (n + 3)*1.0;
    
    if (score[0]>= average){
        printf("Jojo lolos\n");
    }else{
        printf("Jojo tidak lolos\n");
    }

    if(score[1] >= average){
        printf("Lili lolos\n");
    }else{
        printf("Lili tidak lolos\n");
    }

    if(score[2] >= average){
        printf("Bibi lolos\n");
    }else{
        printf("Bibi tidak lolos\n");
    }

    return 0;
}