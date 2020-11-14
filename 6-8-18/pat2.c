#include<stdio.h>
void main()
{
      int r,row;
      printf("Enter the rows : ");
      scanf("%d",&row);
      r=row;
      for(int i=1;i<=r;i++)
      {
            for(int j=1;j<=r-i;j++)
            {
                  printf(" ");
                  
            }
            for(int k=1;k<=i;k++)
            {
                  printf("* ");
            }
            printf("\n");
      }
}
