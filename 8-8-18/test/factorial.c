#include<stdio.h>

void main()

{
      
int n, fact;
      
printf("Enter a number : ");
   
   scanf("%d",&n);
   
   fact=1;
     
 for(int i=1;i<=n;i++)
   
   {
          
  fact=fact*i;
   
   }
   
   printf("The factorial of %d is %d.\n",n,fact);

}
