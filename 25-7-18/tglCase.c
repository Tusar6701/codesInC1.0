#include<stdio.h>
void main()
{
      char a,A;
      printf("Enter an alphabet : ");
      scanf("%c",&a);
      if(a>=97 && a<=122)
      {
            A=a-32;
      }
      else if(a>=65 && a<=91)
      {
            printf("The entered character is already in upper case.\n");
      }
      else
      {
            printf("The entered character is not an alphabet.\n");
      }
      
      printf("The alphabet in upper case is %c. \n", A);
}

