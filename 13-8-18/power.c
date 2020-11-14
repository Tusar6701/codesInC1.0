#include<stdio.h>
void main()
{
      int i,x,n, y=1;
      printf("\n Enter the values of x and n : \n");
      scanf("%d%d",&x,&n);
      for(i=1;i<=n;i++)
      {
            y=y*x;
      }
      printf("\n%d to the power of %d is equal to %d\n",x,n,y);
}

