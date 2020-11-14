/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>


void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	i = 0; 
	j = 0;
	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		int m = l + (r - l) / 2; 

		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 


void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 

int main() 
{ 
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    arr[i]=rand()%100;
	}
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
    clock_t t;
    t = clock();
	printf("Given array is \n"); 
	printArray(arr, arr_size); 
	t=clock();
    printf("Timer started!!!");
	mergeSort(arr, 0, arr_size - 1); 
    printf("Timer stopped!!!");
    t=clock()-t;
	printf("\nSorted array is \n"); 
	printArray(arr, arr_size); 
	printf("Time taken is %f seconds", ((double)t)/CLOCKS_PER_SEC);
	return 0; 
} 

