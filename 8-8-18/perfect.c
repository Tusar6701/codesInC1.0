#include<stdio.h>
void main()
{
      int n,sum;
      printf("Enter a number to be checked : ");
      scanf("%d",&n);
      sum=0;
      for(int i=1;i<n;i++)
      {
            if(n%i==0)
            {
                  sum=sum+i;
            }
      }
      if(sum==n)
      {
            printf("The number is perfect. \n");
      }
      else
      {
            printf("The number is not perfect. \n");
      }            
}
