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

void add(int *a,int *b,int n1,int n2)
{
	int i=0,j=0,k=0,n3=0;
	int *c = (int*)malloc((n1+n2)*3*sizeof(int));
	while(i<n1&&j<n2)
	{
		if(*(a+i*3) < *(b+j*3))
		{
			*(c+k*3) = *(a+i*3);
			*(c+k*3+1) = *(a+i*3+1);
			*(c+k*3+2) = *(a+i*3+2);
			k++;
			i++;
			n3++;
		}
		else if(*(a+i*3) > *(b+j*3))
		{
			*(c+k*3) = *(b+j*3);
			*(c+k*3+1) = *(b+j*3+1);
			*(c+k*3+2) = *(b+j*3+2);
			k++;
			j++;
			n3++;
		}
		else
		{
			if(*(a+i*3+1) < *(b+j*3+1))
			{
				*(c+k*3) = *(a+i*3);
				*(c+k*3+1) = *(a+i*3+1);
				*(c+k*3+2) = *(a+i*3+2);
				k++;
				i++;
				n3++;
			}
			else if(*(a+i*3+1) > *(b+j*3+1))
			{
				*(c+k*3) = *(b+j*3);
				*(c+k*3+1) = *(b+j*3+1);
				*(c+k*3+2) = *(b+j*3+2);
				k++;
				j++;
				n3++;
			}
			else
			{
				*(c+k*3) = *(a+i*3);
				*(c+k*3+1) = *(a+i*3+1);
				*(c+k*3+2) = *(a+i*3+2) + *(b+j*3+2);
				i++;
				j++;
				k++;
				n3++;
			}
		}
	}
	while(i<n1)
	{
		*(c+k*3) = *(a+i*3);
		*(c+k*3+1) = *(a+i*3+1);
		*(c+k*3+2) = *(a+i*3+2);
		k++;
		i++;
		n3++;
	}
	while(j<n2)
	{
		*(c+k*3) = *(b+j*3);
		*(c+k*3+1) = *(b+j*3+1);
		*(c+k*3+2) = *(b+j*3+2);
		k++;
		j++;
		n3++;
	}

	printf("\nThe added sparse matrix is : \n");
	for(i=0;i<n3;i++)
		printf("\n%d\t%d\t%d",*(c+i*3),*(c+i*3+1),*(c+i*3+2));

}


int main()
{
	int r,c,i,j,n1=0,n2=0;
	printf("\nEnter #Rows : ");
	scanf("%d",&r);
	printf("\nEnter #Columns : ");
	scanf("%d",&c);
	int *a = (int*)malloc(r*c*sizeof(int));
	int *b = (int*)malloc(r*c*sizeof(int));
	printf("\nEnter the elements of matrix 1 : \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&*(a+i*c+j));
	printf("\nEnter the elements of matrix 2 : \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&*(b+i*c+j));
	int *s_a;
	int *s_b;
	s_a = sparse(a,r,c);
	s_b = sparse(b,r,c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(*(a+i*c+j)!=0)
				n1++;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(*(b+i*c+j)!=0)
				n2++;
	printf("\nSparse matrix 1 : \n");
	for(i=0;i<n1;i++)
		printf("\n%d\t%d\t%d",*(s_a+i*3),*(s_a+i*3+1),*(s_a+i*3+2));
	printf("\nSparse matrix 2 : \n");
	for(i=0;i<n2;i++)
		printf("\n%d\t%d\t%d",*(s_b+i*3),*(s_b+i*3+1),*(s_b+i*3+2));
	add(s_a,s_b,n1,n2);
	return 0;
}
