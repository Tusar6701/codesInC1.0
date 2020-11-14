/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <time.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 

        if (arr[mid] == x)  return mid; 
  
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
  
        return binarySearch(arr, mid+1, r, x); 
   } 

   return -1; 
} 
  
int main(void) 
{ 
    int m,x;
    printf("Enter the value of n : ");
    scanf("%d", &m);
    int arr[m];
    clock_t t;
    
    for(int i=0;i<m;i++)
	{
	    arr[i]=rand()%100;
	}
   int n = sizeof(arr)/ sizeof(arr[0]); 
   printf("Enter the item you want to search : ");
   scanf("%d", &x);
    
   t=clock();
   int result = binarySearch(arr, 0, n-1, x); 
   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", result); 
    t=clock()-t;
    printf("\nTime taken is %f ", ((double)t)/CLOCKS_PER_SEC);
   return 0; 
} 