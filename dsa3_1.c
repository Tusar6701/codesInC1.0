#include<stdio.h>

void input(int a[],int n)
{
	int i;
	printf("\nEnter the coefficient as per power : \n");
	for(i=0;i<n;i++)
	{
		printf("\nCoeff. of x^%d : ",i);
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	int i;
	printf("\n\n");
	for(i=n-1;i>=1;i--)
		printf("%dx^%d + ",a[i],i);
	printf("%d",a[0]);
}

void add(int a[],int b[],int m,int n)
{
	int i;
	int c[m];
	for(i=m-1;i>=n;i--)
		c[i] = a[i];
	for(i=n-1;i>=0;i--)
		c[i] = a[i] + b[i];
	printf("\nThe added polynomial is : \n");
	for(i=m-1;i>=1;i--)
		printf("%dx^%d + ",c[i],i);
	printf("%d",c[0]);
}

void mul(int a[],int b[],int m,int n)
{
	int i,j;
	int c[m+n];
	for(i=0;i<m+n;i++)
		c[i] = 0;
	for(i=m-1;i>=0;i--)
		for(j=n-1;j>=0;j--)
			c[i+j] += a[i] * b[j];
	printf("\nThe multiplied polynomial is : \n");
	for(i=m+n-1;i>=1;i--)
		printf("%dx^%d + ",c[i],i);
	printf("%d",c[0]);
}

int main()
{
	int m,n,choice;
	printf("\nEnter the order of the first polynomial : ");
	scanf("%d",&m);
	printf("\nEnter the order of the second polynomial : ");
	scanf("%d",&n);
	int a[m+1];
	int b[n+1];
	while(1)
	{
		int c;
		printf("\nMenu.\n1.Input\n2.Display\n3.Addition\n5.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			printf("\nPolynomial 1 or 2 : ");
            scanf("%d",&choice);
			if(choice==1)
				input(a,m+1);
			else if(choice==2)
				input(b,n+1);
			else
				printf("\nInvalid choice");
			break;
			case 2:
			printf("\nPolynomial 1 or 2 : ");
            scanf("%d",&choice);
			if(choice==1)
				display(a,m+1);
			else if(choice==2)
				display(b,n+1);
			else
				printf("\nInvalid choice");
			break;
			case 3:
			if(m>n)
				add(a,b,m+1,n+1);
			else
				add(b,a,n+1,m+1);
			break;
			case 4:
			mul(a,b,m+1,n+1);
			break;
			case 5:
			exit(0);
		}
	}
}
