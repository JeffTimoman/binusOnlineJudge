#include<stdio.h>


void quickSort(int *arr, int left, int right){
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};
	
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}


int main()
{
	int a = 0, b = 0;
	scanf("%d", &b);
	for(a = 0; a < b; a++ ){
		
		int c = 0, d = 0, n = 0, count = 0, maxcount = 0;
		scanf("%d", &n);
		long int arr[20005];
		int freq[20005];
		for(c = 0; c < n; c++){
			scanf("%ld", &arr[c]);
			freq[c] = -1;
		}
		for(c = 0; c < n; c++){
			count = 1;
			for(d = c + 1; d < n; d++){
				if(arr[c] == arr[d]){
					count++;
					freq[d] = 0;
				}
			}
			if(freq[c] != 0){
				if(count > maxcount){
					maxcount = count;
				}
				freq[c] = count;
			}
		}
		printf("Case #%d: %d\n", a+1, maxcount);
		int result[n];
		int e = 0, f = 0;
		for(c = 0; c < n; c++){
        	if(freq[c] == maxcount){
            	result[f++] = arr[c];
            	e++;
        	}
    	}
		// for(c = 0; c < e; c++){
		//     for(d = c+1; d < e; d++){
		//         if(result[d] < result[c]){
		//             int tmp = result[c];
		//             result[c] = result[d];
		//             result[d] = tmp;
		//             }
		//         }
		//     }	
		quickSort(result, 0, e-1);
		for(c = 0; c < e; c++){
			if(c == e-1){
				printf("%d", result[c]);	
			} else{
				printf("%d ", result[c]);	
			}
        
    	}
    	printf("\n");
	}
	return 0;
}
