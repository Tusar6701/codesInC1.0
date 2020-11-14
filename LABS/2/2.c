#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a;
    float b,sum=0;
    if(argc!=3)
    {
          printf("please put program_name , value1, value2 \n");
          return -1;
     }
       // argv[o] is for the program name 
     a= atoi(argv[1]);
     b= atof(argv[2]);
     sum = (float)a+b;
     printf("Sum of %d, %f is: %f\n",a,b,sum);
     return 0;
 }
