#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            for(int k=n;k>=i;k--)
            {
                  printf(" ");
            }
            
            for(int j=1;j<=i;j++)
            {
                  printf("%d",j);
            }
            for(int l=i;l>1;l--)
            {
                  int l1=l-1;
                  printf("%d",l1);
            }
            printf("\n");
            
      }
}
