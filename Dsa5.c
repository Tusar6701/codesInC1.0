#include<stdio.h>

#include<stdlib.h>

void add(int **p1,int *p2,int ,int);

void main()

{

int n,m,i,key;

printf("enter the value of m and n\n");

Scanf("%d%d"&m,&n);

int **p1=(int*)malloc(m*sizeof(int*));

for(i=0;i<m;i++)

p[i]=(int*)malloc(n*sizeof(int));

int **p2=(int*)malloc(m*sizeof(int*));

for(i=0;i<n;i++)

p[i]=(int*)malloc(n*sizeof(int));

add(p1,p2,m,n)

}

void add(int **a,int **b,int m,int n)

{
printf("enter the value of array A\n");

for(int i=0;i<m;i++)

{
for(int j=0;j<n;j++)

scanf("%d",&a[i][j]);

}

}

printf("enter the value of Array B\n")

for(int i=0;i<m;i++)

{

for(int j=0;j<n;j++)

scanf("%d",&b[i][j]);

}

}

printf("Sorted number are");

int max=a[0][0];

for(int i=0;i<n;i++)

if(a[i][j]<max)

{

printf("%d",max);

}

int big=b[0][0];

for(int i=0;i<n;i++)

if(b[i][j]<big)

{
printf("%d",big);

}


