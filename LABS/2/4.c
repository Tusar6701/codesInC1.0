#include<stdio.h>
#include<string.h>
 struct show
{
   char st[10];
   int num;
 };
 int main(int argc, char* argv[])
 {
     struct show ob;
     if(argc!=3)
     printf("enter three arguments");
     else
     {
         strcpy(ob.st,argv[1]);
         ob.num= atoi(argv[2]);
         
         
         printf("the tsring is:%s",ob.st);
         printf("the interger is: %d",ob.num);
     }
     return 0;
    }
