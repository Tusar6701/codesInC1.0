````````````````````````````````````````````````````````````````````````````````````/*#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            printf("\n");
            for(int j=1;j<=i;j++)
            {
                  if((j+i)%2==0)
                  {
                        printf("1");
                  }
                  else
                  {
                        printf("0");
                  }
            }
            
      }
      printf("\n");
      
}*/

//OR THIS WILL ALSO DO

#include<stdio.h>
void main()
{
      int n;
      printf("\nEnter the number of rows : ");
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
            printf("\n");
            for(int j=1;j<=i;j++)
            {
                  printf("%d",(i+j+1)%2);
            }
            
      }
      printf("\n");
      
}

