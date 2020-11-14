#include<stdio.h>
void main()
{
      int i,j,n, sum=0, s1=0;
      printf("\nEnter the range number : " );
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
            for(j=1;j<=i;j++)
            {
                  s1++;
            }
            sum=sum+s1;
      }
      printf("\nThe sum of given series upto the entered range is %d.\n",sum);
}
