#include<stdio.h>
void main()
{
      int a[20],i,m,n,r;
      printf("\nEnter the decimal Integer : ");
      scanf("%d",&n);
      m=n;
      for(i=0;n>0;i++)
      {
            r=n%2;
            a[i]=r;
            n=n/2;
      }
      printf("\nBinary equivalent of %d is ",m);
      for(i--;i>0;i--)
      {
            printf("%d",a[i]);
      }
      printf("\n");
}
