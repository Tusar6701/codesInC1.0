#include<stdio.h>
void main()
{
      int a,fact=1;
      printf("Enter the number : \n");
      scanf("%d",&a);
      for(int i=1;i<=a;i++)
      {
            fact=fact*i;
      }
      printf("Factorial is %d \n",fact);
}
