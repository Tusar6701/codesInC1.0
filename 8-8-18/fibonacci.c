#include<stdio.h>
void main()
{
      int t1,t2,n,nt;
      printf("Enter the number of terms : ");
      scanf("%d",&n);
      t1=0;
      t2=1;
      printf("%d,%d",t1,t2);
      for(int i=0;i<n;i++)
      {
            nt=t1+t2;
            t1=t2;
            t2=nt;
            printf(",%d",nt);
      }
      printf("\n");
}
