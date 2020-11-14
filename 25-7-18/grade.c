#include<stdio.h>
void main()
{
      int mrks,m;
      char g;
      printf("Enter the marks secured : ");
      scanf("%d",&mrks);
      m=mrks/10;
      switch(m)
      {
            case 9:
            {
                  printf("The grade is O \n");
                  break;
            }
            case 8:
            {
                  printf("The grade is E \n");
                  break;
            }
            
            case 7:
            {
                  printf("The grade is A \n");
                  break;
            }
            case 6:
            {
                  printf("The grade is B \n");
                  break;
            }
            case 5:
            {
                  printf("The grade is C \n");
                  break;
            }
            case 4:
            {
                  printf("The grade is D \n");
                  break;
            }
            case 3:
            {
                  printf("The grade is F \n");
                  break;
            }
            default:
            {
                  printf("ERROR!!! Wrong Input.\n");
                  break;
            }
           
      }
} 
