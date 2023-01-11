#include <stdio.h>
#include <string.h>

FILE *f;
int currentIndex = 0;
struct Score{
    char name[100];
    int score;
}scores[100];
// Score scores[100]

void merge(int left, int mid,  int right){
    //Cari panjang kiri dan kanan 
    int n1 = mid - left + 1; // mid ngikut di kiri, karena dibawah midnya +1
    int n2  = right - mid;

    //buat 2 array
    Score L[n1], R[n2];

    //Isi data tampung ke data kiri
    for (int i = 0; i < n1; i++){
        L[i] = scores[left + i];
    }

    // Tampung ke data kanan
    for (int i = 0; i < n2; i++){
        R[i] = scores[mid+i+1];
    }

    // Buat 3 variable (2 buat track array kiri dan kanan, 1 buat track data asli)
    int i = 0, j = 0, k = left;
 
    //Compare selama data array kiri dan kanan belum habis
    while (i < n1 && j < n2){
        //Compare datanya (compare string)

        //kalau dara kiri lebih kecil, pakai data kiri.
        if (strcmp(L[i].name, R[j].name) < 0){
            scores[k] = L[i];
            i++;
        //kalau data kanan lebih kecil, pakai data kanan.
        }else{
            scores[k] = R[j];
            j++;
        }
        k++;
    }
        // kalau mmisalkan ada data sisa, kita langsung masukin aja
        while (i < n1){
            scores[k++] = L[i++];
        }

        while (j < n2){
            scores[k++] = R[j++];
        }
}

void mergeSort(int left, int right){
    if (left < right){
        //Cari nilai tengah 
        int mid = left + (right-left)/2;

        //kita bagi dua berdasarkan midnya
        mergeSort(left, mid);
        mergeSort(mid + 1, right);

        //Disort dan disatukan kembali
        merge(left, mid, right);
    }
}

int binarySearch(int left, int right, char *name){
    if (left <= right){
        int mid = left + (right - left)/2;
        if (strcmp(scores[mid].name, name) == 0){
            return mid;
        }else if (strcmp(scores[mid].name, name) < 0){
            return binarySearch(mid + 1, right, name);
        }else{
            return binarySearch(left, mid - 1, name);
        }
    }
    return -1;
}

bool validName(char *name){
    int index = binarySearch(0, currentIndex, name);
    return index == - 1;
}


void inputData(char * name, int score){
    strcpy(scores[currentIndex].name, name);
    scores[currentIndex].score = score;
    currentIndex++;

    f = fopen("score.txt", "a");
    fprintf(f, "%s#%d\n", name, score);
    fclose(f);
}

void initializeData(){
    f = fopen("score.txt", "r");
    while(!feof(f)){
        fscanf(f, "%[^#]#%d\n", scores[currentIndex].name, &scores[currentIndex].score);
        currentIndex++;
    }
    fclose(f);
}

void showData(){
    mergeSort(0, currentIndex-1);
    printf("%-4s | %-20s | %-5s\n", "No", "Name", "Score");
    printf("=======================================================\n");
    for(int i = 0; i < currentIndex; i++){
        printf("%-4d | %-20s | %-5d\n", i+1, scores[i].name, scores[i].score);
    }
    printf("=======================================================\n");
}

void addScore(){
    char name[100];
    int s;
    do {
        printf("Input name: ");
        scanf("%[^\n]", name);
        getchar();
    } while (!validName(name));

    printf("Input score: ");
    scanf("%d", &s);
    getchar();

    inputData(name, s);
}

void deleteData(int index){
    for (int i = index; i < currentIndex; i++){
        scores[i] = scores[i+1];
    }
    currentIndex--;

    f = fopen("score.txt", "w");
    for (int i = 0; i < currentIndex; i++){
        fprintf(f, "%s#%d", scores[i].name, scores[i].score);
    }
    fclose(f);
}
void updateData(int index, char *name, int score){
    strcpy(scores[index].name, name);
    scores[index].score = score;

    f = fopen("score.txt", "w");
    for (int i = 0; i < currentIndex; i++){
        fprintf(f, "%s#%d\n", scores[i].name, scores[i].score);
    }
    fclose(f);
}
void updateScore(){
    int index;
    do {
        printf("Input index");
        scanf("%d", &index);
        getchar();
    }while(!(index > 0 && index < currentIndex));
    index--;

    char name[100];
    int s;
    do {
        printf("Input name: ");
        scanf("%[^\n]", name);
        getchar();
    } while (!validName(name));

    printf("Input score: ");
    scanf("%d", &s);
    getchar();

    updateData(index, name, s);

}

void deleteScore(){
    int index;
    do {
        printf("Input index : ");
        scanf("%d", &index);
        getchar();
    }while(!(index > 0 && index < currentIndex));
    index--;

    deleteData(index);
}
void printMenu(){
    puts("1. Insert Data");
    puts("2. Update Data");
    puts("3. Delete Data");
    puts("4. Exit");
    printf(">> ");
}
int main(){
    initializeData();

    int menu;

    do {
        showData();
        printMenu();
        scanf("%d", &menu);
        getchar();
        switch(menu){
            case 1 : 
                addScore();
                break;
            case 2 :
                updateScore();
                break;
            case 3 : 
                deleteScore();
                break;
            case 4 : 
                printf("Thank you for using this program\n");            
                break;
            default: 
                puts("Invalid Input");
                break;
        }
        printf("Press to continue. . . ");
        getchar();
    }while(menu != 4);
    return 0;
}