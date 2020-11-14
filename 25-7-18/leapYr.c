#include<stdio.h>
void main()
{
      int yr;
      printf("Enter the year : ");
      scanf("%d",&yr);
      if(yr%4==0)
      {
            if(yr%100==0 && yr%400!=0)
            {
                  printf("Not a leap year. \n");
            }
            else
            {
                  printf("Leap year. \n");
            }
      }
      else
      {
            printf("Not a leap year. \n ");
      }
}

