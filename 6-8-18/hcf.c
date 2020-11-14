#include<stdio.h>
void main()
{
      int a,b,m,n,hcf;
      printf("Enter two number : \n");
      scanf("%d%d",&a,&b);
      m=a;
      n=b;
      while(a!=b)
      {
            if(a>b)
            {
                  a=a-b;
                  hcf=a;
            }
            else
            {
                  b=b-a;
                  hcf = b;
            }
      }
      printf("The hcf of %d and %d is %d.\n",m,n,hcf);
}

