
    for (int i = 0; i < n; i++){
        // int a = 0;
        for (int j = 0; j < n; j++){
            if (j <= counter){
                printf(" ");
            }else {
            printf("*");
            }
            // a++;
        }
        printf("\n");
        counter--;
    }
    return 0;
}



// int main(){
//     int n = 5;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if (i == 0 || i == n-1 || j == 0 || j == n-1){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }