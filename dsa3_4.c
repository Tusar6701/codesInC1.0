#include<stdio.h>
#include<stdlib.h>

int* sparse(int *a,int r,int c)
{
	// Counting no. of non zero elements in the matrix.
	int i,j,n=0;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(*(a+i*c+j)!=0)
				n++;
	// Constructing the sparse matrix.
	int *s = (int*)malloc(n*3*sizeof(int));
	int k = 0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(*(a+i*c+j)!=0)
			{
				*(s+k*3) = i;
				*(s+k*3+1) = j;
				*(s+k*3+2) = *(a+i*c+j);
				k++;
			}
		}
	}
	return s;
}

void transpose(int *a,int n)
{
	int i,j,temp_row,temp_col,temp_ele;
	int *t = (int*)malloc(n*3*sizeof(int));
	for(i=0;i<n;i++)
	{
		*(t+i*3) = *(a+i*3+1);
		*(t+i*3+1) = *(a+i*3);
		*(t+i*3+2) = *(a+i*3+2);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(t+i*3) > *(t+j*3))
			{
				temp_row = *(t+i*3);
				temp_col = *(t+i*3+1);
				temp_ele = *(t+i*3+2);
				*(t+i*3) = *(t+j*3);
				*(t+i*3+1) = *(t+j*3+1);
				*(t+i*3+2) = *(t+j*3+2);
				*(t+j*3) = temp_row;
				*(t+j*3+1) = temp_col;
				*(t+j*3+2) = temp_ele;
			}
		}
	}
	printf("\nThe transpose of the sparse matrix : \n");
	for(i=0;i<n;i++)
		printf("\n%d\t%d\t%d",*(t+i*3),*(t+i*3+1),*(t+i*3+2));
}

int main()
{
	int r,c,i,j,n=0;
	printf("\nEnter #Rows : ");
	scanf("%d",&r);
	printf("\nEnter #Columns : ");
	scanf("%d",&c);
	int *a = (int*)malloc(r*c*sizeof(int));
	printf("\nEnter the elements of matrix : \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&*(a+i*c+j));
	int *s_a;
	s_a = sparse(a,r,c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(*(a+i*c+j)!=0)
				n++;
	printf("\nSparse matrix : \n");
	for(i=0;i<n;i++)
		printf("\n%d\t%d\t%d",*(s_a+i*3),*(s_a+i*3+1),*(s_a+i*3+2));
	transpose(s_a,n);
	return 0;
}
