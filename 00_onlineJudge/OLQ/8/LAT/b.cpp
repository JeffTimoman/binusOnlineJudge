#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++){
        char nama[101];
        char nim[101];
        int age;
        char postalcode[101];
        char placeofbirth[101];
        char dateofbirth[101];
        char highschool[101];
        int numberofsiblings;
        int height;
        char bankaccount[101];
        scanf("%s", &nama);
        getchar();
        scanf("%s", &nim);
        getchar();
        scanf("%d", &age);
        getchar();
        scanf("%s", &postalcode);
        getchar();
        scanf("%s", &placeofbirth);
        getchar();
        scanf("%s", &dateofbirth);
        getchar();
        scanf("%[^\n]", &highschool);
        getchar();
        scanf("%d", &numberofsiblings);
        getchar();
        scanf("%d", &height);
        getchar();
        scanf("%s", &bankaccount);
        getchar();
        printf("Mahasiswa ke-%d:\nNama: %s\nNIM: %s\nUmur: %d\nKode Pos: %s\nTempat Lahir: %s\nTanggal Lahir: %s\nAlmamater SMA: %s\nJumlah Saudara Kandung: %d\nTinggi Badan: %d\nNOMOR REKENING: %s\n", i+1, nama, nim, age, postalcode, placeofbirth, dateofbirth, highschool, numberofsiblings, height, bankaccount);
    }
    return 0;
}