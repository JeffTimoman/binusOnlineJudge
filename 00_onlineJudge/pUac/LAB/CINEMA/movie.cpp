#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

FILE *fp;
int currIndex = 0;
struct Movie{
    char id[10];
    char name[21];
    int sH, sM;
    int eH, eM; 
    int studio;
}movies[10001];


//Random Functional
void printMenu(){
    puts("Hi, There!");
    puts("1. View All Movie");
    puts("2. Add New Movie");
    puts("3. Update Movie");
    puts("4. Delete Movie");
    puts("5. Save and Exit");
    printf("Input [1-5]: ");
}

//Sorting
//Sort By Name
void merge(int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    struct Movie L[n1], R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = movies[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = movies[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if (strcmp(L[i].name, R[j].name) < 0){
            movies[k++] = L[i++];
        }else {
            movies[k++] = R[j++];
        }
    }

    while (i < n1){
        movies[k++] = L[i++];
    }
    while (j < n2){
        movies[k++] = R[j++];
    }
}
void mergeSort(int left = 0, int right = currIndex -1){
    if (left < right){
        int mid = left + (right-left)/2;
        mergeSort(left, mid);
        mergeSort(mid+1, right);
        merge(left, mid, right);
    }
}

//Data Management
void readData(){
    fp = fopen("cinema.csv", "r");
    while(!feof(fp)){
        fscanf(fp, "%[^,],%[^,],%02d:%02d,%02d:%02d,%d\n", movies[currIndex].id, movies[currIndex].name, &movies[currIndex].sH, &movies[currIndex].sM, &movies[currIndex].eH, &movies[currIndex].eM, &movies[currIndex].studio);
        currIndex++;
    }
    fclose(fp);
}
void insertData(char id[], char name[], int sH, int sM, int eH, int eM, int studio){
    strcpy(movies[currIndex].id, id);
    strcpy(movies[currIndex].name, name);
    movies[currIndex].sH = sH;
    movies[currIndex].sM = sM;
    movies[currIndex].eH = eH;
    movies[currIndex].eM = eM;
    movies[currIndex].studio = studio;
    currIndex++;
}
void updateData(int index, char id[], char name[], int sH, int sM, int eH, int eM, int studio){
    strcpy(movies[index].id, id);
    strcpy(movies[index].name, name);
    movies[index].sH = sH;
    movies[index].sM = sM;
    movies[index].eH = eH;
    movies[index].eM = eM;
    movies[index].studio = studio;
}
void deleteData(int index){
    for(int i = index; i < currIndex - 1; i++){
        movies[i] = movies[i+1];
    }
    currIndex--;
}

//Validation
bool validateName(char name[]){
    int len = strlen(name);
    if(len < 1 || len > 20){
        puts("Movie Name Must Be Between 1 - 20 Characters");
        return false;
    }
    return true;
}
bool validateTime(char input[], int &h, int &m){
    if(strlen(input) != 5){
        puts("Invalid Time Format");
        return false;
    }
    if(input[2] != ':'){
        puts("Invalid Time Format");
        return false;
    }
    h = (input[0] - '0') * 10 + (input[1] - '0');
    m = (input[3] - '0') * 10 + (input[4] - '0');
    if(h < 0 || h > 23 || m < 0 || m > 59){
        puts("Invalid Time Format");
        return false;
    }
    return true;
}
bool validateStudio(int studio){
    if(studio < 1 || studio > 10){
        puts("Studio Must Be Between 1 - 10");
        return false;
    }
    return true;
}
//Switch Case Functions
void viewMovie(){
    if (currIndex == 0){
        printf("Oops. No Movie Available!\n");
        return;
    }
    puts("+===================================================================================================================+");
    printf("| %-5s | %-13s | %-25s | %-12s | %-12s | %-18s | %-10s |\n", "No.", "Movie ID", "Movie Name", "Start Time", "End Time", "Movie Duration", "Studio");
    puts("+===================================================================================================================+");
    for (int i = 0; i < currIndex; i++){
        int duration = (movies[i].eH - movies[i].sH) * 60 + (movies[i].eM - movies[i].sM);
        if (duration < 0) duration += 24 * 60;
        printf("| %-5d | %-13s | %-25s |    %02d:%02d     |    %02d:%02d     | %-18d | %-10d |\n", i + 1, movies[i].id, movies[i].name, movies[i].sH, movies[i].sM, movies[i].eH, movies[i].eM, duration, movies[i].studio);
    }
    puts("+===================================================================================================================+");
}
void addMovie(){
    char name[21];
    do {
        printf("Enter Movie Name [1-20 Characters] : ");
        scanf("%[^\n]", name); getchar();
    }while(!(validateName(name)));

    int sH, mH;
    char input[6];
    do{
        printf("Enter Movie Start Time [HH:MM]: ");
        scanf("%[^\n]", input); getchar();
    }while(!validateTime(input, sH, mH));

    int eH, eM;
    do{
        printf("Enter Movie End Time [HH:MM]: ");
        scanf("%[^\n]", input); getchar();
    }while(!validateTime(input, eH, eM));

    int studio;
    do{
        printf("Enter Movie Studio [1-10]: ");
        scanf("%d", &studio); getchar();
    }while(!(validateStudio(studio)));

    char id[10];
    sprintf(id, "MV%d%d%d", rand() % 10, rand() % 10, rand() % 10);
    
    insertData(id, name, sH, mH, eH, eM, studio);

}
void updateMovie(){
    if (currIndex == 0){
        puts("No Movie To Update!");
        return;
    }
    viewMovie();
    int index;
    do {
        printf("Enter Movie Index To Update [1-%d]: ", currIndex);
        scanf("%d", &index); getchar();
    }while(index < 1 || index > currIndex);
    index--;
	
    char name[21];
    do {
        printf("Enter Movie Name [1-20 Characters] : ");
        scanf("%[^\n]", name); getchar();
    }while(!(validateName(name)));

    int sH, mH;
    char input[6];
    do{
        printf("Enter Movie Start Time [HH:MM]: ");
        scanf("%[^\n]", input); getchar();
    }while(!validateTime(input, sH, mH));

    int eH, eM;
    do{
        printf("Enter Movie End Time [HH:MM]: ");
        scanf("%[^\n]", input); getchar();
    }while(!validateTime(input, eH, eM));

    int studio;
    do{
        printf("Enter Movie Studio [1-10]: ");
        scanf("%d", &studio); getchar();
    }while(!(validateStudio(studio)));

    updateData(index, movies[index].id, name, sH, mH, eH, eM, studio);
    puts("Movie updated!");
}
void deleteMovie(){
    if (currIndex == 0){
        puts("No Movie To Delete!");
        return;
    }
    viewMovie();
    int index;
    do {
        printf("Enter Movie Index To Delete [1-%d]: ", currIndex);
        scanf("%d", &index); getchar();
    }while(index < 1 || index > currIndex);
    index--;
    deleteData(index);
    puts("Movie deleted!");
}
void saveExit(){
    fp = fopen("cinema.csv", "w");
    for (int i = 0; i < currIndex; i++){
        fprintf(fp, "%s,%s,%02d:%02d,%02d:%02d,%d\n", movies[i].id, movies[i].name, movies[i].sH, movies[i].sM, movies[i].eH, movies[i].eM, movies[i].studio);
    }
}

int main(){
    readData();
    srand(time(NULL));
    int menu;
    do {
        system("cls");
        printMenu();
        scanf("%d", &menu); getchar();
        puts("");
        switch(menu){
            case 1:
                mergeSort();
                puts("View All Movie");
                viewMovie();
                break;
            case 2:
                puts("Add New Movie");
                mergeSort();
                addMovie();
                break;
            case 3: 
                puts("Update Movie");
                mergeSort();
                updateMovie();
                break;
            case 4:
                puts("Delete Movie");
                mergeSort();
                deleteMovie();
                break;
            case 5:
                puts("Thanks for using this app!");
                mergeSort();
                saveExit();
                break;
            default:
                puts("Invalid menu!");
                break;
        };
        printf("Press to continue....");getchar();
    }while(menu != 5);

    return 0;
}
