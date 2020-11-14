#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("You havent entered 2 numbers.");
        return 0;   
    }
    int sum=atoi(argv[1])+atoi(argv[2]);
    printf("The sum is %d\n",sum);
    return 0;
}