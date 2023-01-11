#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct Cinema{
	char name[40];
	char ID[10];
	int startHour, startMinute;
	int endHour, endMinute;
	int duration;
	int studio;
};

struct Cinema movie[100];
int size = 0;

void readFile(){
	FILE *filePtr;
	filePtr = fopen("cinemafile.csv", "r");
	if (filePtr == NULL){
		return;
	}
	
	while (!feof(filePtr)){
		fscanf(filePtr, "%[^,], %[^,], %02d:%02d, %02d:%02d, %d", movie[size].ID, movie[size].name, &movie[size].startHour, &movie[size].startMinute, &movie[size].endHour, &movie[size].endMinute, &movie[size].studio);
		fgetc(filePtr);
		movie[size].duration = (movie[size].endHour*60 + movie[size].endMinute) - (movie[size].startHour*60 + movie[size].startMinute);
		size++;
	}
	
	fclose(filePtr);
}

void DisplayMovie(){
	printf("| No. | Movie ID | Movie Name | Start Time | End Time | Movie Duration | Studio |\n");
	for (int i = 0; i < size; i++){ // aku tuh bikin ini tetap mulai dari 0 karena pikirku kalau mulai dari 1 nanti ngaruh ke mergesort nya nggak? jadi yang ke print dari yang index kedua langsung gitu? atau tetep bisa?
		if (i==0){
			continue;
		} else{
			printf("| %d | %s | %s | %02d:%02d | %02d:%02d | %d Minutes | %d |\n", i, movie[i].ID, movie[i].name, movie[i].startHour, movie[i].startMinute, movie[i].endHour, movie[i].endMinute, movie[i].duration, movie[i].studio);
		}
	}
}

void mergeAscending(int left, int mid, int right){
	int sizeLeft = mid - left + 1;
	int sizeRight = right - mid;
	
	Cinema leftArr[sizeLeft], rightArr[sizeRight];
	
	for (int i = 0; i < sizeLeft; i++){
		leftArr[i] = movie[left+i];
	}
	
	for (int i = 0; i < sizeRight; i++){
		rightArr[i] = movie[mid+i+1];
	}
	
	int i = 0;
	int j = 0;
	int k = left;
	
	while (i < sizeLeft && j < sizeRight){
		if (leftArr[i].duration < rightArr[j].duration){
			movie[k] = leftArr[i];
			i++;
		} else{
			movie[k] = rightArr[j];
			j++;
		}
		k++;
	}
	
	while (i < sizeLeft){
		movie[k] = leftArr[i];
		i++;
		k++;
	}
	
	while (j < sizeRight){
		movie[k] = rightArr[j];
		j++;
		k++;
	}
	
}

void MergeSortAscending(int left=0, int right=size-1){
	if (left < right){
		int mid = (left + right) / 2;
		MergeSortAscending(left, mid);
		MergeSortAscending(mid+1, right);
		mergeAscending(left, mid, right);
	}
}

void mergeDescending(int left, int mid, int right){
	int sizeLeft = mid - left + 1;
	int sizeRight = right - mid;
	
	Cinema leftArr[sizeLeft], rightArr[sizeRight];
	
	for (int i = 0; i < sizeLeft; i++){
		leftArr[i] = movie[left+i];
	}
	
	for (int i = 0; i < sizeRight; i++){
		rightArr[i] = movie[mid+i+1];
	}
	
	int i = 0;
	int j = 0;
	int k = left;
	
	while (i < sizeLeft && j < sizeRight){
		if (leftArr[i].duration > rightArr[j].duration){
			movie[k] = leftArr[i];
			i++;
		} else{
			movie[k] = rightArr[j];
			j++;
		}
		k++;
	}
	
	while (i < sizeLeft){
		movie[k] = leftArr[i];
		i++;
		k++;
	}
	
	while (j < sizeRight){
		movie[k] = rightArr[j];
		j++;
		k++;
	}
	
}

void MergeSortDescending(int left=0, int right=size-1){
	if (left < right){
		int mid = (left + right) / 2;
		MergeSortDescending(left, mid);
		MergeSortDescending(mid+1, right);
		mergeDescending(left, mid, right);
	}
}

void ViewAllMovie(){
	if (size == 0){
		printf("Oops. No Movie Available!\n");
		printf("Press Enter To Continue...\n");
		getchar();
		return;
	}
	
	MergeSortAscending();
	DisplayMovie();
	return;
}

void ViewDescending(){
	if (size == 0){
		printf("Oops. No Movie Available!\n");
		printf("Press Enter To Continue...\n");
		getchar();
		return;
	}
	
	MergeSortDescending();
	DisplayMovie();
	return;
}

void AddMovie(){
	char name[40];
	int banyakHuruf = 0;
	do{
		printf("Enter Movie Name [1-20 Characters]: ");
		scanf("%[^\n]", &name); getchar();
		
		banyakHuruf = strlen(name);
		if (banyakHuruf < 1 || banyakHuruf > 20){
			printf("Movie Name Must Be Between 1-20 Characters!\n");
		}
	} while (banyakHuruf < 1 || banyakHuruf > 20);
	
	int startHour;
	int startMinute;
	do{
		printf("Enter Movie Start Time [HH:MM]: ");
		scanf("%2d:%2d", &startHour, &startMinute); getchar();
		if (startHour < 00 || startHour > 23 || startMinute < 00 || startMinute > 59){
			printf("Invalid Time Format\n");
		}
	} while (startHour < 00 || startHour > 23 || startMinute < 00 || startMinute > 59);
	
	int endHour;
	int endMinute;
	do{
		printf("Enter Movie End Time [HH:MM]: ");
		scanf("%2d:%2d", &endHour, &endMinute); getchar();
		if (endHour < 00 || endHour > 23 || endMinute < 00 || endMinute > 59){
			printf("Invalid Time Format\n");
		}
	} while (endHour < 00 || endHour > 23 || endMinute < 00 || endMinute > 59);

	int duration = (endHour*60 + endMinute) - (startHour*60 + startMinute);
	
	int studio;
	do{
		printf("Enter Movie Studio [1-10]: ");
		scanf("%d", &studio); getchar();
		if (studio < 1 || studio > 10){
			printf("Movie Studio Must Be Between 1-10!\n");
		}
	} while (studio < 1 || studio > 10);
	
	char ID[10];
	sprintf(ID, "MV%d%d%d", rand()%10, rand()%10, rand()%10);
	strcpy(movie[size].name, name);
	movie[size].startHour = startHour;
	movie[size].startMinute = startMinute;
	movie[size].endHour = endHour;
	movie[size].endMinute = endMinute;
	movie[size].duration = duration;
	movie[size].studio = studio;
	strcpy(movie[size].ID, ID);
	size++;
    
	printf("Movie Added Successfully!\n");
	printf("Press Enter to Continue...\n"); 
	getchar();
}

void UpdateMovie(){
	
	ViewDescending();
	
//	if (size == 0){
//		printf("No Movie To Update :(\n");
//		printf("Press Enter To Continue...\n");
//		getchar();
//		return;
//	}
	
	int inputUpdate = 0;
	do{
		printf("Enter Movie Index To Update [1-%d]: ", size);
		scanf("%d", &inputUpdate); getchar();
		if (inputUpdate == 0 || inputUpdate > size){
			printf("Enter a valid number\n");
		}
	} while (inputUpdate == 0 || inputUpdate > size); // benerin.
	
	char updateName[40];
	int banyakHuruf = 0;
	do{
		printf("Enter Movie Name [1-20 Characters]: ");
		scanf("%[^\n]", &updateName); getchar();
		
		banyakHuruf = strlen(updateName);
		if (banyakHuruf < 1 || banyakHuruf > 20){
			printf("Movie Name Must Be Between 1-20 Characters!\n");
		}
	} while (banyakHuruf < 1 || banyakHuruf > 20);
	
	int updateStartHour;
	int updateStartMinute;
	do{
		printf("Enter Movie Start Time [HH:MM]: ");
		scanf("%2d:%2d", &updateStartHour, &updateStartMinute);
		if (updateStartHour < 00 || updateStartHour > 23 || updateStartMinute < 00 || updateStartMinute > 59){
			printf("Invalid Time Format\n");
		}
	} while (updateStartHour < 00 || updateStartHour > 23 || updateStartMinute < 0 || updateStartMinute > 59);
	
	int updateEndHour;
	int updateEndMinute;
	do{
		printf("Enter Movie End Time [HH:MM]: ");
		scanf("%2d:%2d", &updateEndHour, &updateEndMinute);
		if (updateEndHour < 00 || updateEndHour > 23 || updateEndMinute < 00 || updateEndMinute > 59){
			printf("Invalid Time Format\n");
		}
	} while (updateEndHour < 00 || updateEndHour > 23 || updateEndMinute < 00 || updateEndMinute > 59);
	
	int updateDuration = (updateEndHour*60 + updateEndMinute) - (updateStartHour*60 + updateStartMinute);
	
	int updateStudio;
	do{
		printf("Enter Movie Studio [1-10]: ");
		scanf("%d", &updateStudio);
		if (updateStudio < 1 || updateStudio > 10){
			printf("Movie Studio Must Be Between 1-10!\n");
		}
	} while (updateStudio < 1 || updateStudio > 10);
	
	strcpy(movie[inputUpdate-1].name, updateName);
	movie[inputUpdate-1].startHour = updateStartHour;
	movie[inputUpdate-1].startMinute = updateStartMinute;
	movie[inputUpdate-1].endHour = updateEndHour;
	movie[inputUpdate-1].endMinute = updateEndMinute;
	movie[inputUpdate-1].studio = updateStudio;
	
	printf("Movie Updated!\n");
	printf("Press Enter To Continue...\n");
	getchar();
}

void DeleteMovie(){
	ViewDescending();
	
	int inputDelete;
	
	do{
		printf("Choose Index To Delete [1-%d]:", size);
		scanf("%d", &inputDelete);
		if (inputDelete <= 0 || inputDelete > size){
			printf("Enter a valid number\n");
		}
	} while (inputDelete <= 0 || inputDelete > size);
	
	for (int i = inputDelete - 1; i < size-1; i++){
		movie[i] = movie[i+1]; // shortcut delete. gak usah strcpy.
	}
	
	size--;
}

void SaveAndExit(){
	FILE *filePtr = fopen("cinema.csv", "w");
	
	for (int i = 0; i < size; i++){
		fprintf(filePtr, "%s, %s, %02:%02d, %02d:%02d, %d\n", movie[i].ID, movie[i].name, movie[i].startHour, movie[i].startMinute, movie[i].endHour, movie[i].endMinute, movie[i].studio);
	}
	
	fclose(filePtr);
	exit(0);
}

void mainMenu(){
	int input;
    system("cls");
	do{
		printf("Cinema XIV\n");
		printf("Hi, There!\n");
		printf("1. View All Movie\n");
		printf("2. Add New Movie\n");
		printf("3. Update Movie\n");
		printf("4. Delete Movie\n");
		printf("5. Save and Exit\n");
		printf("Input [1-5]: ");
		scanf("%d", &input); getchar();
		
		switch (input){
			
			case 1:{
				ViewAllMovie();
				break;
			}
			case 2:{
				AddMovie();
				break;
			}
			case 3:{
				UpdateMovie();
				break;
			}
			case 4:{
				DeleteMovie();
				break;
			}
			case 5:{
				SaveAndExit();
				return;
			}
		}
        getchar();
	} while (input >= 1 && input <= 5);
}

int main(){
	srand(time(0));
	readFile();
	mainMenu();
	
	return 0;
}
