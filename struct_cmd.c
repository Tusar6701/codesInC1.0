#include<stdio.h>
#include<stdlib.h>

typedef struct packet{
    char *str;
    int num;
}Packet;

void display(Packet pck)
{
    printf("String is %s\n",pck->str);
    printf("Number is %d\n",pck->num);
}

int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        printf("You havent entered 2 arguments.");
        return 0;
    }
    Packet pck;
    pck.str=argv[1];
    pck.num=atoi(argv[2]);
    display(&pck);
}