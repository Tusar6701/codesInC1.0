#include<stdio.h>
void main()
{
      char c, cl;
      printf("Enter an alphabet : ");
      scanf("%c",&c);
      if(c>=65&&c<=91||c>=97&&c<=123)
      {
            if(c>=65&&c<=91)
            {
                  cl=c+32;
                  printf("The alphabet in lowercase is %c\n",cl);
            }
            else
            {
                  printf("The entered alphabet is not in uppercase.\n");
            }
      }
      else
      {
            printf("The entered character is not an alphabet at all.\n");
      }
      
}
