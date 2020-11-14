#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        printf("You havent entered 2 arguments.");
        return 0;
    }
    char *str1=argv[1];
    char *str2=argv[2];
    printf("First string is %s\n",str1);
    printf("Second string is %s\n",str2);
    return 0;
}