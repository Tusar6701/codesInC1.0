#include<stdio.h>
#include<stdlib.h>
struct info
 {
    int roll_no;
    char name[50];
    float cgpa;
 };
 int display( struct info *inf)
 {
      printf("\n roll_no : %d", inf->roll_no);
      printf("\n name : %s", inf->name);
      printf("\n cgpa : %f", inf->cgpa);
  }
  
  int main()
  {
     struct info infs;
     printf("Enter roll no.");
     scanf("%d",&infs.roll_no);
     printf("Enter name");
     scanf("%s",&infs.name);
     printf("Enter cgpa");
     scanf("%f",&infs.cgpa);
     display(&infs);
     return 0;
  }
  
