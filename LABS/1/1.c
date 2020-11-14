#include<stdio.h>
int main()
{
   int *x,*y,a,b,temp;
   printf("Enter the values to be swapped\n");
   scanf("%d%d",&a,&b);
   printf("Before swapping\n");
   printf("%d",a);
   printf("%d",b);
   /*x= &a;
   y=&b;
   temp= *x;
   *x=*y;
   *y=temp;*/
  temp=a;
a=b;
b=temp;
   printf("After swapping\n");
   printf("%d",a);
   printf("%d",b);
  }
   
    
