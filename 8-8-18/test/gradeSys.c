#include<stdio.h>
void main()
{
      int mks,m;
      char g;
      printf("Enter the total marks secured : ");
      scanf("%d",&mks);
      m=mks/10;
      switch(m)
      {
            case(10):
            {
                  printf("The grade secured by the student is O.\n");
                  break;
            }      
            case(9):
            {
                  printf("The grade secured by the student is O.\n");
                  break;
            }
            case(8):
            {
                  printf("The grade secured by the student is E.\n");
                  break;
            }
            case(7):
            {
                  printf("The grade secured by the student is A.\n");
                  break;
            }
            case(6):
            {
                  printf("The grade secured by the student is B.\n");
                  break;
            }
            case(5):
            {
                  printf("The grade secured by the student is C.\n");
                  break;
            }
            case(4):
            {
                  printf("The grade secured by the student is D.\n");
                  break;
            }
            case(3):
            {
                  printf("The grade secured by the student is F.\n");
                  break;
            }
            case(2):
            {
                  printf("The grade secured by the student is F.\n");
                  break;
            }
            case(1):
            {
                  printf("The grade secured by the student is F.\n");
                  break;
            }
            case(0):
            {
                  printf("The grade secured by the student is F.\n");
                  break;
            }
            default:
            {
                  printf("ERROR!!! Wrong input, please try again. \n");
                  break;
            }
      }
      
}
      
