#include<stdio.h>
#include<math.h>
void main()
{
      int n,n1,temp, s=0;
      printf("\nENTER THE NUMBER TO BE CHECKED : ");
      scanf("%d",&n);
      n1=n;
      while(temp!=0)
      {
            temp=n1%10;
            n1= n1/10;
                      
            s=pow(temp,3)+s;
            
      }
      
      if(s==n)
      {
            printf("\nArmstrong\n");
      }
      else
      {
            printf("\nNot armstrong\n");
      }
}

