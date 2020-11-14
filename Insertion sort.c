
#include <math.h> 
#include <stdio.h> 
#include <time.h>


void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
    int m;
    printf("Enter the value of n : ");
    scanf("%d", &m);
	int arr[m];
	for(int i=0;i<m;i++){arr[i]=rand()%100;}
	int n = sizeof(arr) / sizeof(arr[0]); 
    clock_t t;
    t=clock();
    printf("Before sorting : \n");
    printArray(arr, n); 
    printf("After sorting : \n");
	insertionSort(arr, n); 
	printArray(arr, n); 
	t=clock()-t;
	printf("Time taken = %f", ((double)t)/CLOCKS_PER_SEC);

	return 0; 
} 
