#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            for(int j=n;j>=i;j--)
            {
                  printf(" ");
            }
            int s=1;
            
            for(int l=0;l<=i;l++)
            {
                  printf("%d ",s);
                  s=(s*(i-l)/(l+1));
            }
            printf("\n");
      }
}
