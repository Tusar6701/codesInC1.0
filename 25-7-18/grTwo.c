#include<stdio.h>
void main()
{
      int a, b;
      printf("Enter the two numbers : \n");
      scanf("%d%d",&a,&b);
      if(a>b)
      {
            printf("%d is greater than %d. \n",a,b);
      }
      else if(b>a)
      {
            printf("%d is greater than %d. \n",b,a);
      }
      else
      {
            printf("Both the numbers are equal. \n");
      }
}

