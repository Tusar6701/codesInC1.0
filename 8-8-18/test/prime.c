#include<stdio.h>
void main()
{
      int rem,n,t=0;
      printf("Enter the number to be checked : ");
      scanf("%d",&n);
      
      if(n!=1)
      {
            for(int i=1;i<=n;i++)
            {
                  rem=n%i;
                  if(rem==0)
                  {
                        t++;
                  }
            }
            if(t==2)
            {
                  printf("The number is a prime number. \n");
            }
            else
            {
                  printf("The number is not a prime number. \n");
            }
      }
      else
      {
            printf("1 is a unique number. \n");
      }
}     
