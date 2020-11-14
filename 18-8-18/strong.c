#include<stdio.h>
void main()
{
      int n,n1,rem,fact=1,s=0;
      printf("Enter the number to be checked : ");
      scanf("%d",&n);
      n1=n;
      while(rem!=0)
      {
            rem=n1%10;
            n1=n1/10;
            fact=1;
            for(int i =1;i<=rem;i++)
            {
                  fact=fact*i;
            }
            s=s+fact;
            
      }
      
      if((s-1)==n)
      {
            printf("Strong");
      }
      else
      {
            printf("Not strong");
      }
}
            
