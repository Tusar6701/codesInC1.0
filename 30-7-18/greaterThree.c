#include<stdio.h>
void main()
{
      int a,b,c,max;
      printf("Enter the three numbers to be checked : \n");
      scanf("%d%d%d",&a,&b,&c);
      
      if(a>b && a>c)
      {
            max=a;
      }
      else if(b>c)
      {
            max=b;
      }
      else
      {
            max=c;
      }
      printf("The greatest of the three numbers is %d.\n",max);
}

      
