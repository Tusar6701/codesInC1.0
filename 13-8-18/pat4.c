#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            for(int j=1;j<=i;j++)
            {
                  printf(" ");
            }
            int k;
            for(k=1;k<=n-i;k++)
            {
                  printf("%d",k);
            }
            printf("%d",k);
            
            for(int l=k-1;l>=1;l--)
            {
                  
                  printf("%d",l);
            }
            printf("\n");
            
      }
}
