#include<stdio.h>
void main()
{
      char c;
      printf("Enter an alphabet : ");
      scanf("%c",&c);
      if(c>=65 && c<=91 || c>=97 && c<=122)
      {
      
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            {
                  printf("The entered alphabet is a vowel. \n");
            }
            else
            {
                  printf("The entered alphabet is a consonant. \n ");
            }
      }
      else
      {
            printf("The entered character is not an alphabet. \n");
      }
}

      
