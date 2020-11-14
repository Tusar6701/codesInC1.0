#include<stdio.h>
struct pkt {
	char ch1;
	char ch2[2];
	char ch3;
};
void main()
{
	int n,m;
	struct pkt p;
	printf("Enter a Number : ");
	scanf("%d",&n);
	unsigned char *c = (char *)&n, a[4];
	for(int i=0;i<4;i++)
		a[i]=*(c+i);
	p.ch1=a[0];
	p.ch2[0]=a[1];
	p.ch2[1]=a[2];
	p.ch3=a[3];
	printf("The structure value are : %u %u %u %u \n",p.ch1,p.ch2[0],p.ch2[1],p.ch3);
	c=(char*)&m;
	*(c+0)=p.ch1;
	*(c+1)=p.ch2[0];
	*(c+2)=p.ch2[1];
	*(c+3)=p.ch3;
	printf("The generted o/p is %d",m);
}
