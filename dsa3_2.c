#include<stdio.h>


void display(int *a,int n)
{
	printf("\n\n");
	for(int i=0;i<n-1;i++)
		printf("%dx^%d + ",*(a+i*2),*(a+i*2+1));
	printf("%dx^%d",*(a+(n-1)*2),*(a+(n-1)*2+1));
}
int main()
{
	int i,j,k=0,ch,n1=0,n2=0;
	printf("\nPolynomial 1 : \n");
	int *a = (int*)malloc(2*sizeof(int));
	printf("\nEnter highest exponent onwards along with their coefficient :\n");
	while(1)
	{
		n1++;
		printf("\nEnter coefficient : ");
		scanf("%d",&*(a+k*2));
		printf("\nEnter exponent : ");
		scanf("%d",&*(a+k*2+1));
		printf("\nEnter 1 for input: ");
		scanf("%d",&ch);
		if(ch!=1)
			break;
		k++;
		a = realloc(a,(k+1)*2*sizeof(int));

	}
	printf("\n");
	// for(k=0;k<n1;k++)
	// 	printf("\n%d\t%d",*(a+k*2),*(a+k*2+1));
	display(a,n1);

	printf("\nPolynomial 2 : \n");
	int *b = (int*)malloc(2*sizeof(int));
	k = 0;
	printf("\nEnter highest exponent onwards along with their coefficient :\n");
	while(1)
	{
		n2++;
		printf("\nEnter coefficient : ");
		scanf("%d",&*(b+k*2));
		printf("\nEnter exponent : ");
		scanf("%d",&*(b+k*2+1));
		printf("\nEnter 1 for input: ");
		scanf("%d",&ch);
		if(ch!=1)
			break;
		k++;
		b = realloc(b,(k+1)*2*sizeof(int));

	}
	printf("\n");
	// for(k=0;k<n2;k++)
	// 	printf("\n%d\t%d",*(b+k*2),*(b+k*2+1));
	display(b,n2);

	int *c = (int*)malloc((n1+n2)*2*sizeof(int));
	i = 0;
	j = 0;
	k = 0;
	while(i<n1&&j<n2)
	{
		if(*(a+i*2+1)>*(b+j*2+1))
		{
			*(c+k*2) = *(a+i*2);
			*(c+k*2+1) = *(a+i*2+1);
			k++;
			i++;
		}
		else if(*(a+i*2+1)<*(b+j*2+1))
		{
			*(c+k*2) = *(b+j*2);
			*(c+k*2+1) = *(b+j*2+1);
			k++;
			j++;
		}
		else
		{
			*(c+k*2) = *(b+j*2)+*(a+i*2);
			*(c+k*2+1) = *(b+j*2+1);
			k++;
			j++;
			i++;
		}
	}
	while(i<n1)
	{
		*(c+k*2) = *(a+i*2);
		*(c+k*2+1) = *(a+i*2+1);
		k++;
		i++;
	}
	while(j<n2)
	{
		*(c+k*2) = *(b+j*2);
		*(c+k*2+1) = *(b+j*2+1);
		k++;
		j++;

	}
	int n3 = k;
	printf("\nThe added polynomial : \n");
	// for(k=0;k<n3;k++)
	// 	printf("\n%d\t%d",*(c+k*2),*(c+k*2+1));
	display(c,n3);

}




