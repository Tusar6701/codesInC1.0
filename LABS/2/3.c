
#include<stdio.h>
int main(int argc, char *argv[])
{
   
    if(argc!=3)
    {
          printf("please put program_name , value1, value2 \n");
          return -1;
     }
       // argv[o] is for the program name 
    printf("strings are: %s %s\n", argv[1],argv[2]);
 }
