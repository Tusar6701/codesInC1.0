#include<stdio.h>
void main()
{
      int gcd,a,b,n1,n2;
      printf("Enter two numbers : \n");
      scanf("%d%d",&n1,&n2);
      a=n1;
      b=n2;
      if(a!=0 && b!=0)
      {
            while(a!=b)
            {
                  if(a>b)
                  {
                        a=a-b;
                        gcd=a; 
                  }
                  else if(b>a)
                  {
                        b=b-a;
                        gcd=b;
                  }
                  else
                  {
                        gcd=a;
                  }
            }
            printf("The GCD or HCF of %d and %d is %d. \n",n1,n2,gcd);
      }
      else
      {
            printf("ERROR!!! Input should not be 0. \n");
      }     
      
}
