#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("You havent entered 2 numbers.");
        return 0;
    }
    float sum=atoi(argv[1])+atof(argv[2]);
    printf("The sum is %0.2f\n",sum);
    return 0;
}